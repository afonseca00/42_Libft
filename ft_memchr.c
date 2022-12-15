/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:46:35 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/09 20:07:12 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (0);
}

/*
int main () {
   const char str[] = "ola tudo /bem contigo";
   const char c = '/';
   char *result;

  result = ft_memchr(str, c, 11);
  printf(" %s\n", result);
  return(0);
}
*/
//vai verificar se na string existe o caractar 
//se encontra retorna dai para a frente
//se nao retorna null