/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:23:41 by motoure           #+#    #+#             */
/*   Updated: 2019/11/08 17:59:53 by motoure          ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*str;

	str = (char *)s;
	len = ft_strlen((char *)s);
	i = ft_strlen((char *)s) - 1;
	if ((char)c == '\0')
		return (&str[i + 1]);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			break ;
		i--;
		if (i == -1)
			return (0);
	}
	return (&str[i]);
}
