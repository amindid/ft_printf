/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:49:58 by aouchaad          #+#    #+#             */
/*   Updated: 2022/11/29 22:50:30 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_put_adress(size_t n, char *base);
int	ft_put_char(char ptr);
int	ft_put_nbr(long n);
int	ft_put_str(char *str);
int	ft_put_hexadcml(long unsigned int n, char *base);
int	ft_put_unsignd_deciml(unsigned int n);

#endif
