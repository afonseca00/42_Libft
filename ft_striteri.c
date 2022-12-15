/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:04:56 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/11 17:03:10 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*
void f(unsigned int i, char *str)
{
	printf("My inner function: index = %d and the string is %s\n", i, str);
}

int main()
{
  char str[10] = "ola";
  printf("The result is %s\n", str);
  ft_striteri(str, f);
  printf("The result is %s\n", str);
  return 0;
}
*/
//vai receber a fucao f
//e vai usar em cada um dos caracteres