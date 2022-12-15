/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:20:17 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/09 16:53:21 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		i = i + 32;
		return (i);
	}
	return (i);
}

/*
int main()
{
    printf("%c", ft_tolower('A'));
    printf("%c", ft_tolower('Z'));
}
*/
//torna as minusculas em maisculas
//na tabela ascii a difereça entre maisculas e minusculas sao 32
//neste caso faz se +32