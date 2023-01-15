/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:55:31 by aouchaad          #+#    #+#             */
/*   Updated: 2022/11/30 15:48:16 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(long n)
{
	char	number;
	int		count;

	count = 0;
	if (n < 0)
	{
		count += ft_put_char('-');
		n *= -1;
	}
	if (n >= 10)
	{
		count += ft_put_nbr (n / 10);
		count += ft_put_nbr (n % 10);
	}
	number = n + '0';
	if (n >= 0 && n <= 9)
		count += ft_put_char(number);
	return (count);
}
