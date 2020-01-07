/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:27:38 by motoure           #+#    #+#             */
/*   Updated: 2020/01/06 23:54:04 by motoure          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	unsigned char to_test;

	to_test = (unsigned char)c;
	if (to_test >= 91 && to_test <= 96)
		return (0);
	if (to_test >= 65 && to_test <= 122)
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if ((unsigned char)c >= '0' && (unsigned char)c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
