/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:19:14 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 17:38:19 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
int main()
{
	printf("%d\n", ft_isalnum('#'));
	printf("%d\n", ft_isalnum('/'));
    printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('5'));
}
*/
//se numero de 0 a 9 ou letra retorna 1 senao retorna 0