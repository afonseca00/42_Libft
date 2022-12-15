/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:03:43 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/14 19:42:52 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (0);
}

/*
int main () {
   const char str[] = "ola somos os mais craques daqui";
   const char ch = 'a';
   char *result;

  result = ft_strrchr(str, ch);
  printf(" %s\n", result);
  return(0);
}
*/
//retorna a palavra a partir do ultimo caracter encontrado
//neste caso o a