/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:10:16 by yba               #+#    #+#             */
/*   Updated: 2023/01/16 12:28:26 by yba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*fill_string(char *str, unsigned int nombre, long long taille)
{
	while (nombre > 0)
	{
		str[taille] = '0' + (nombre % 10);
		nombre = nombre / 10;
		taille--;
	}
	return (str);
}

static long long	ft_taille(int n)
{
	long	taille;

	taille = 0;
	if (n <= 0)
		taille = 1;
	while (n != 0)
	{
		n = n / 10;
		taille++;
	}
	return (taille);
}

char	*ft_itoa(int n)
{
	long long		taille;
	long long		negatif;
	unsigned int	nombre;
	char			*str;

	negatif = 1;
	taille = ft_taille(n);
	str = (char *)malloc((taille + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[taille--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		negatif = negatif * -1;
		nombre = n * -1;
		str[0] = '-';
	}
	else
		nombre = n;
	str = fill_string(str, nombre, taille);
	return (str);
}
