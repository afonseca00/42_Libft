/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:59:01 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/13 17:17:12 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n > i && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		i--;
	if (n == 0)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*
int main ()
{
   printf(" %d\n", ft_strncmp("abcdefg", "abcdfwe", 10));
   printf(" %d\n", ft_strncmp("abcdefg", "abcdefg", 10));
}
*/
//compara ate n elementos ou ate str1 ou str2 acabar