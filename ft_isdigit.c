/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:42:11 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 17:35:41 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
int main()
{
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('9'));
}
*/
//Se for um numero de 0 a 9 retorna 1 se nao retorna 0