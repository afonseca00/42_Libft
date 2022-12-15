/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:27:08 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/11 15:37:39 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (0);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_str[i++] = s2[j++];
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
int main()
{
   char s1[10] = "ola ";
   char s2[10] = "como estas";
   char *result = ft_strjoin(s1, s2);
   printf(" %s\n", result);
   return 0;
}
*/
//recebe duas strings e faz a juncao de ambas dentro de malloc
//e retorn o malloc
