/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:26:37 by motoure           #+#    #+#             */
/*   Updated: 2019/11/10 16:10:06 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i_array_b;
	unsigned char	*a;

	i_array_b = 0;
	a = (unsigned char *)b;
	while (i_array_b < len)
	{
		a[i_array_b] = (unsigned char)c;
		i_array_b++;
	}
	b = a;
	return (b);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long		i;
	char				*return_value;
	char				*casted_dst;
	char				*casted_src;
	char				swap[len];

	casted_dst = (char *)dst;
	casted_src = (char *)src;
	return_value = (char *)dst;
	ft_memset(swap, '0', len);
	i = 0;
	while (i < len)
	{
		swap[i] = casted_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		casted_dst[i] = swap[i];
		i++;
	}
	return (return_value);
}
