/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:28:28 by aouchaad          #+#    #+#             */
/*   Updated: 2022/11/29 22:32:28 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_adress(size_t n, char *base)
{
	int	count;

	count = 0;
	count += ft_put_str("0x");
	count += ft_put_hexadcml(n, base);
	return (count);
}
