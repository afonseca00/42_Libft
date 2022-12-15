/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:55:49 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/11 15:28:32 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	start2;

	i = 0;
	start2 = start;
	if (start > ft_strlen(s))
	{
		new_str = malloc(sizeof(char));
		*new_str = 0;
		return (new_str);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (0);
	while (start < ft_strlen(s) && i < len)
		new_str[i++] = s[start2++];
	new_str[i] = '\0';
	return (new_str);
}

/*
int main()
{
   char str[20] = "ola tudo bem";
   char *result = ft_substr(str, 4, 4);
   printf("The  result is %s\n", result);
   return 0;
}
*/
//vai criar uma substr desde start ate ao len 
//elimina tudo o que esta antes e depois e acrescenta 1 a len que é \0
