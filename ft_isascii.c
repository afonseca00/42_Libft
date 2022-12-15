/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:44:28 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 17:59:29 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

/*
int main()
{
    printf("%d\n", ft_isascii(45));
    printf("%d\n", ft_isascii(128));
    printf("%d\n", ft_isascii('1'));
}
*/
//se se encontrar dentro da tabela ascii retorna 1 senao retorna 0