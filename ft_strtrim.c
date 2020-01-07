/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:53:40 by motoure           #+#    #+#             */
/*   Updated: 2020/01/07 02:19:44 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

int		check_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * ft_strlen(s1) + 1);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	i = 0;
	while (check_set(str[i], set) && check_set(str[0], set))
		str++;
	ft_strrev(str);
	while (check_set(str[i], set) && check_set(str[0], set))
		str++;
	ft_strrev(str);
	if (ft_strlen(str) == 1)
	{
		if (str[0] == '\0')
		{
			str = malloc(sizeof(char) * 1);
			str[0] = '\0';
		}
	}
	return (str);
}
