/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loruzqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:11:44 by loruzqui          #+#    #+#             */
/*   Updated: 2024/09/28 19:11:46 by loruzqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	toreturn;

	toreturn = 0;
	if (n == -2147483648)
	{
		toreturn += ft_putstr("-2147483648");
		return (toreturn);
	}
	if (n < 0)
	{
		toreturn += ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		toreturn += ft_putnbr(n / 10);
		toreturn += ft_putnbr(n % 10);
	}
	else
		toreturn += ft_putchar(n + '0');
	return (toreturn);
}

int	ft_putstr(char *s)
{
	int	i;
	int	toreturn;

	i = 0;
	toreturn = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i] != '\0')
	{
		toreturn += ft_putchar(s[i]);
		i++;
	}
	return (toreturn);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_puthex(unsigned long long n, int bol)
{
	char	min;
	char	may;
	int		toreturn;

	toreturn = 0;
	min = "0123456789abcdef"[n % 16];
	may = "0123456789ABCDEF"[n % 16];
	if (n >= 16)
		toreturn += ft_puthex(n / 16, bol);
	if (!bol)
		toreturn += ft_putchar(min);
	else
		toreturn += ft_putchar(may);
	return (toreturn);
}

int	ft_putunsignedint(unsigned int n)
{
	int	toreturn;

	toreturn = 0;
	if (n >= 10)
	{
		toreturn += ft_putunsignedint(n / 10);
		toreturn += ft_putunsignedint(n % 10);
	}
	else
		toreturn += ft_putchar(n + '0');
	return (toreturn);
}
