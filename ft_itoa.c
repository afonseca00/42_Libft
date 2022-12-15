/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:28:04 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 23:15:02 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int				i;
	unsigned int	num;

	i = 1;
	num = n;
	if (n < 0)
	{
		num = -n;
		i++;
	}
	while (num > 9)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	num;

	str = (char *)malloc(ft_count(n) + 1);
	if (!str)
		return (0);
	i = ft_count(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		str[0] = '-';
	}
	str[i--] = '\0';
	if (num == 0)
		str[i] = '0';
	while (num > 0)
	{
		str[i--] = num % 10 + 48;
		num /= 10;
	}
	return (str);
}

/*
int main()
{
   int nmb = 89;
   char *val = ft_itoa(nmb);
   printf("number %d\n", nmb);
   printf("string %s\n", val);
   return 0;
}
*/
//transforma int em  string
//escrevendo de tras para a frente