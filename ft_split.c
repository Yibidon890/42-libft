/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:13:40 by yba               #+#    #+#             */
/*   Updated: 2023/01/13 10:17:43 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	n_words(char const *s, char c)
{
	size_t	words;
	int		z;
	int		i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			z = i;
			while ((s[z] != '\0') && (s[z] != c))
				z++;
			words++;
			i = z;
		}
		else
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	len_w;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	tab = ft_calloc(n_words(s, c) + 1, sizeof(*tab));
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len_w = ft_strlen(s);
			else
				len_w = ft_strchr(s, c) - s;
			tab[i++] = ft_substr(s, 0, len_w);
			s += len_w;
		}
	}
	return (tab);
}
