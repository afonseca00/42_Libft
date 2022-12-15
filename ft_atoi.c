/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:11:15 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 22:23:50 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

/*
int main()
{
   char str[] = "47/5a";
   int val = ft_atoi(str);
   printf ("%d ", val);
   return 0;
}
*/
//esta funcao vai transformar char num int sempre que possivel
//se não for possivel retorna 0
//Verifica se temos um white spaces ou nao
//Esta funcao transforma um inteiro de base 10
//numa string com os algarismos do inteiro de base 10
