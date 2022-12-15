/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:07:34 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 17:33:10 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int main()
{
	printf("%d\n", ft_isalpha('5'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('A'));
}
*/
//se for uma letra retorna 1 se nao retorna 0