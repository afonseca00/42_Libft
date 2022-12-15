/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:01:49 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/11 12:23:19 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == 0)
		return (NULL);
	ft_memcpy(str, s, ft_strlen(s) + 1);
	return (str);
}

/*
int main()
{
   char str[] = "Ola tudo bem";
   char* result = ft_strdup(str);
   printf("%s", result);
   return 0;
}
*/
//duplica a string para dentro da malloc
//ft_memcpy para fazer a copia da string 
//ft_strlen para ver o tamanho da string