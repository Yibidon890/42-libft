/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:15:02 by yba               #+#    #+#             */
/*   Updated: 2023/01/13 10:18:33 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordlen(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while ((s[start + i] != '\0') && (i < len))
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len_opti;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	len_opti = wordlen(s, start, len);
	sub = (char *)malloc(sizeof(*s) * (len_opti + 1));
	if (!sub)
		return (NULL);
	while ((s[start + i] != '\0') && (i < len))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
