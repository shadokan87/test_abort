/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 19:41:32 by motoure           #+#    #+#             */
/*   Updated: 2020/01/06 23:57:13 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*return_value;
	unsigned int	i;
	size_t			s_len;

	s_len = ft_strlen(s);
	i = 0;
	if (!s)
		return (0);
	if (!(return_value = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start < s_len)
	{
		while (i < len)
		{
			return_value[i] = s[start];
			i++;
			start++;
		}
	}
	return_value[i] = '\0';
	return (return_value);
}
