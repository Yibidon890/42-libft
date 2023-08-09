/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:55:36 by yba               #+#    #+#             */
/*   Updated: 2023/01/15 12:37:04 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	check_charset(char const *set, char const s2)
{
	int	k;

	k = 0;
	while (set[k])
	{
		if (set[k] == s2)
			return (1);
		k++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		i;
	size_t		k;
	char		*s;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && check_charset(set, s1[i]) == 1)
		i++;
	len = ft_strlen(s1);
	while (len > i && check_charset(set, s1[len - 1]) == 1)
		len--;
	s = malloc(sizeof(*s) * (len - i + 1));
	if (!s)
		return (NULL);
	k = 0;
	while (i < len)
	{
		s[k] = s1[i];
		k++;
		i++;
	}
	s[k] = 0;
	return (s);
}
