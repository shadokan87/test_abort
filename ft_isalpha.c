/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoure <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:55:56 by motoure           #+#    #+#             */
/*   Updated: 2019/11/08 14:38:01 by motoure          ###   ########.fr       */
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
