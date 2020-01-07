/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:20:27 by motoure           #+#    #+#             */
/*   Updated: 2020/01/06 23:24:28 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long	i;
	void			*return_value;

	i = 0;
	return_value = malloc(sizeof(size) * count);
	if (return_value == NULL)
		return (0);
	ft_memset(return_value, 0, count);
	return (return_value);
}
