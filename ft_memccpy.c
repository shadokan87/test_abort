/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:32:35 by motoure           #+#    #+#             */
/*   Updated: 2019/11/07 20:29:20 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *src, char *dst)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long		i;
	char				*return_value;
	char				*casted_dst;
	char				*casted_src;

	casted_dst = (char *)dst;
	casted_src = (char *)src;
	return_value = (char *)dst;
	i = 0;
	while (i < n)
	{
		if (casted_src[i] == (unsigned char)c)
		{
			casted_dst[i] = casted_src[i];
			i++;
			return (&casted_dst[i]);
		}
		casted_dst[i] = casted_src[i];
		i++;
	}
	return (NULL);
}
