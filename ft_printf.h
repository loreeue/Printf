/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loruzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:39:26 by loruzqui          #+#    #+#             */
/*   Updated: 2024/09/28 17:39:28 by loruzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_control_chars(char const c, va_list args);
int	ft_control_pointer(va_list args);
int	ft_control_ints(char const c, va_list args);
int	ft_control_hex(char const c, va_list args);

int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_puthex(unsigned long long n, int bol);
int	ft_putunsignedint(unsigned int n);

#endif
