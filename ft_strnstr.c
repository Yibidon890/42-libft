/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:16:47 by yba               #+#    #+#             */
/*   Updated: 2023/01/15 12:34:29 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	little_len;

	little_len = ft_strlen(little);
	i = 0;
	if (len == 0 && !big)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	while (big[i] && i + little_len - 1 < len)
	{
		k = 0;
		while (big[i + k] == little[k] && little[k])
				k++;
		if (k == little_len)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
