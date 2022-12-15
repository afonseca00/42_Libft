/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:52:52 by afonseca          #+#    #+#             */
/*   Updated: 2022/12/11 16:53:14 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	if (!s || !f)
		return (0);
	i = 0;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (i < (ft_strlen(s)))
	{
		str[i] = f(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char f(unsigned int i, char str)
{
   printf("index = %d and %c\n", i, str);
   return str - 32;
}

int main()
{
   char str[10] = "ola";
   printf("%s\n", str);
   char *result = ft_strmapi(str, f);
   printf("%s\n", result);
   return 0;
}
*/
//vai aplicar a funcao f 
//e vai usar a fucao recebida em cada um dos caracteres da string
//e depois coloca em malloc
//chama se a strdup para alocar memoria
