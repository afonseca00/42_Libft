/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:00:24 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/09 16:51:41 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		i = i - 32;
		return (i);
	}
	return (i);
}

/*
int main()
{
    printf("%c", ft_toupper('a'));
    printf("%c", ft_toupper('z'));
}
*/
//torna as minusculas em maisculas
//na tabela ascii a difereça entre maisculas e minusculas sao 32
//neste caso faz se -32