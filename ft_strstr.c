/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 01:29:56 by motoure           #+#    #+#             */
/*   Updated: 2019/09/13 02:55:43 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	y;

	i = 0;
	y = 0;
	if (to_find[y] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[y])
		{
			while (str[i] == to_find[y] && to_find[y])
			{
				i++;
				y++;
			}
			if (y == (ft_strlen(to_find)))
				return (str + (i - y));
			else
				i--;
		}
		y = 0;
		i++;
	}
	return (NULL);
}
