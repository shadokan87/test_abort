/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:00:40 by motoure           #+#    #+#             */
/*   Updated: 2019/11/08 18:20:58 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*str;

	str = (char *)s;
	len = ft_strlen((char *)s);
	i = 0;
	if ((char)c == '\0')
		return (&str[len]);
	while (i < len)
	{
		if (s[i] == (char)c)
			break ;
		i++;
		if (i == len)
			return (0);
	}
	return (&str[i]);
}
