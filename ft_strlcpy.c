/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:30:48 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 19:30:46 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
		i++;
		return (i);
	}
	if (size != '\0')
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	i++;
	return (i);
}

/*
int main()
{
    char dest[10] = "ola";
    char src[10] = "tudo bem";
    ft_strlcpy(dest, src, 10);
    printf("%s\n", dest);
}
*/
//copia src para dest
//Funciona como strncpy acaba sempre com \0
//copia size - 1 elementos e para garantir o \0 no final