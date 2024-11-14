/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loruzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:56:42 by loruzqui          #+#    #+#             */
/*   Updated: 2024/10/01 10:56:45 by loruzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_control_chars(char const c, va_list args)
{
	int		aux1;
	char	*aux2;
	int		toreturn;

	toreturn = 0;
	if (c == 'c')
	{
		aux1 = va_arg(args, int);
		toreturn += ft_putchar(aux1);
	}
	else if (c == 's')
	{
		aux2 = va_arg(args, char *);
		toreturn += ft_putstr(aux2);
	}
	return (toreturn);
}

int	ft_control_pointer(va_list args)
{
	unsigned long long	aux;
	int					toreturn;

	toreturn = 0;
	aux = va_arg(args, unsigned long long);
	if (!aux)
	{
		toreturn += ft_putstr("(nil)");
	}
	else
	{
		toreturn += ft_putstr("0x");
		toreturn += ft_puthex(aux, 0);
	}
	return (toreturn);
}

int	ft_control_ints(char const c, va_list args)
{
	int	aux;
	int	toreturn;

	toreturn = 0;
	if (c == 'd' || c == 'i')
	{
		aux = va_arg(args, int);
		toreturn += ft_putnbr(aux);
	}
	else if (c == 'u')
	{
		aux = va_arg(args, unsigned int);
		toreturn += ft_putunsignedint(aux);
	}
	return (toreturn);
}

int	ft_control_hex(char const c, va_list args)
{
	unsigned int	aux;
	int				toreturn;

	toreturn = 0;
	if (c == 'x')
	{
		aux = va_arg(args, unsigned int);
		toreturn += ft_puthex(aux, 0);
	}
	else if (c == 'X')
	{
		aux = va_arg(args, unsigned int);
		toreturn += ft_puthex(aux, 1);
	}
	return (toreturn);
}
