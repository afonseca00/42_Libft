/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:31:28 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 19:16:32 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	char	*str;

	str = strdup("ola alex");
	ft_bzero(str, 10);
	printf("%s\n", str);
}
*/
//Ocupa n bytes com NULL 
//a partir a patir do elemento para o qual s esta a apontar
