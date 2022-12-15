/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:56:14 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 19:12:56 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	*str;

	str = strdup("ola alex");
	ft_memset(str, 'a', 10);
	printf("%s\n", str);
}
*/
//vai substituir n bytes do s por o que queremos neste caso a