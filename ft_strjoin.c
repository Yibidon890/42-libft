/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:39:08 by yba               #+#    #+#             */
/*   Updated: 2023/01/15 12:35:44 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	s = malloc(sizeof(*s) * (ft_strlen(s2) + ft_strlen(s1) + 1));
	if (!s)
		return (NULL);
	k = 0;
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		s[i] = s2[k];
		i++;
		k++;
	}
	s[i] = '\0';
	return (s);
}
