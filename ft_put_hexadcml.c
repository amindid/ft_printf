/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadcml.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:42:10 by aouchaad          #+#    #+#             */
/*   Updated: 2022/11/30 15:21:41 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexadcml(long unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_put_hexadcml(n / 16, base);
		count += ft_put_hexadcml(n % 16, base);
	}
	else
	{
		write (1, &base[n], 1);
		count ++;
	}
	return (count);
}
