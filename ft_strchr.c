/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:08:44 by afonseca          #+#    #+#             */
/*   Updated: 2022/11/02 17:42:40 by afonseca         ###   ########.fr       */
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
