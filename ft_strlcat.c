/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:17:05 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 19:37:37 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (slen + dlen);
}

/*
int main () {
    char dest[15] = "ola ";
    char src[15] = "tudo bem";
    
   ft_strlcat(dest, src, 15);
   printf("%s\n", dest);
   return(0);
}
*/
//se o tamanho da dest >= size retorna o tamanho da size + src
//se nao vai passar a dest e o que resta de src