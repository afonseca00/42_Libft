/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:10:54 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/09 22:51:12 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
int main ()
{
   printf(" %d\n", ft_memcmp("abcdefg", "abcdfwe", 10));
   printf(" %d\n", ft_memcmp("abcdefg", "abcdefg", 10));
}
*/
//a diferença deste para strcmp 
//é que este compara duas strings ate n bytes ate serem diferentes