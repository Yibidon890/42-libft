/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:13:31 by yba               #+#    #+#             */
/*   Updated: 2023/01/15 13:05:48 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	len_dest;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i] && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (len_dest > size)
		return (ft_strlen(src) + size);
	dest[len_dest + i] = '\0';
	return (ft_strlen(src) + len_dest);
}
