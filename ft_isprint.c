/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:55:58 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 18:00:49 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}

/*
int main()
{
    printf("%d\n", ft_isprint(31));
    printf("%d\n", ft_isprint(128));
    printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint('a'));
}
*/
//se for algo printavel retorna 1 senao retorna 0