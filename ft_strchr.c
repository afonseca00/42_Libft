/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:08:44 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/09 18:09:27 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	j;

	i = 0;
	j = (char)c;
	while (s[i])
	{
		if (s[i] == j)
			return (&((char *)s)[i]);
		i++;
	}
	if (j == '\0')
		return (&((char *)s)[i]);
	return (NULL);
}

/*
int main () {
   const char str[] = "ola somos os mais craques daqui";
   const char ch = 'c';
   char *result;

  result = ft_strchr(str, ch);
  printf(" %s\n", result);
  return(0);
}
*/
//procura um caracter e copia tudo desde esse caracter para a frente
//neste caso se encontra o caracter c