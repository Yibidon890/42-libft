/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:39:29 by yba               #+#    #+#             */
/*   Updated: 2023/01/15 12:14:46 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_a;
	char	*src_a;

	if (!dest && !src)
		return (NULL);
	if (src > dest)
	{
		dest = ft_memcpy(dest, src, n);
	}
	else
	{
		dest_a = (char *)dest;
		src_a = (char *)src;
		while (n--)
			dest_a[n] = src_a[n];
	}
	return (dest);
}
