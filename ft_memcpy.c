/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:17:29 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 19:24:59 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		((char *) dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

/*
int main()
{
    char src[10] = "ola";
    printf("%s\n", (char *)ft_memcpy(src, "adeus", 10));
}
*/
//copia o que esta na src para o dest