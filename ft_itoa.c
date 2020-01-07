/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 01:16:16 by motoure           #+#    #+#             */
/*   Updated: 2020/01/07 01:18:21 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		y;
	char	swap;

	swap = '0';
	i = 0;
	y = ft_strlen(str) - 1;
	while (i < y)
	{
		swap = str[i];
		str[i] = str[y];
		str[y] = swap;
		i++;
		y--;
	}
	return (str);
}

int		count(int n)
{
	int count;

	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ret;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	negative = n > 0 ? 0 : 1;
	n = (negative) ? n *= -1 : n;
	i = 0;
	ret = malloc(sizeof(char) * count(n) + ((negative) ? 2 : 1));
	while (n)
	{
		ret[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	if ((negative))
	{
		ret[i] = '-';
		i++;
	}
	ret[i] = '\0';
	return (ft_strrev(ret));
}
