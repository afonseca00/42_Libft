/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:55:49 by afonseca          #+#    #+#             */
/*   Updated: 2022/11/07 15:31:22 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	start2;

	i = 0;
	start2 = start;
	if (start > ft_strlen(s))
	{
		new_str = malloc(sizeof(char));
		*new_str = 0;
		return (new_str);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (0);
	while (start < ft_strlen(s) && i < len)
		new_str[i++] = s[start2++];
	new_str[i] = '\0';
	return (new_str);
}
