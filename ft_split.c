/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonseca <afonseca@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:58:01 by afonseca          #+#    #+#             */
/*   Updated: 2022/11/15 11:31:42 by afonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	index;

	index = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && index == 0)
		{
			index = 1;
			i++;
		}
		else if (*s == c)
			index = 0;
		s++;
	}
	return (i);
}

static int	ft_word_size(char const *s, char c, size_t i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wordsize;
	int		strsize;
	char	**newstr;

	i = 0;
	j = 0;
	wordsize = ft_word_count(s, c);
	newstr = malloc((wordsize + 1) * sizeof(char *));
	if (!newstr)
		return (NULL);
	while (j < wordsize)
	{
		while (s[i] == c)
			i++;
		strsize = ft_word_size(s, c, i);
		newstr[j] = ft_substr(s, i, strsize);
		i += strsize;
		j++;
	}
	newstr[j] = NULL;
	return (newstr);
}
/*
int main(void)
{
	int		index;
	char	**split;
	split = ft_split("  slr  hdhdj  alex    ", ' ');
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
	printf("%d\n", ft_word_count(" alex  geu  hu", ' '));
}*/
