/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loruzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:59:12 by loruzqui          #+#    #+#             */
/*   Updated: 2024/09/28 18:59:14 by loruzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_control(char const c, va_list args)
{
	int	toreturn;

	toreturn = 0;
	if (c == 'c' || c == 's')
		toreturn += ft_control_chars(c, args);
	else if (c == 'p')
		toreturn += ft_control_pointer(args);
	else if (c == 'd' || c == 'i' || c == 'u')
		toreturn += ft_control_ints(c, args);
	else if (c == 'x' || c == 'X')
		toreturn += ft_control_hex(c, args);
	else if (c == '%')
		toreturn += ft_putchar('%');
	return (toreturn);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		toreturn;

	va_start(args, format);
	i = 0;
	toreturn = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			toreturn += ft_control(format[i], args);
		}
		else
			toreturn += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (toreturn);
}
