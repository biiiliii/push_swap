/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:52:02 by bimartin          #+#    #+#             */
/*   Updated: 2022/10/13 14:56:24 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int printed)
{
	if (n == -2147483648)
	{
		if (write(1, &"-2147483648", 11) != 11)
			return (-1);
		printed += 11;
		return (printed);
	}
	if (n < 0)
	{
		n *= -1;
		printed += ft_putchar('-');
	}
	if (n > 9)
		printed = ft_putnbr(n / 10, printed);
	if (printed == -1)
		return (-1);
	if (write(1, &"0123456789"[n % 10], 1) != 1)
		return (-1);
	printed++;
	return (printed);
}

int	ft_putnbrhexlower(unsigned int n, int printed)
{
	if (n > 15)
		printed = ft_putnbrhexlower(n / 16, printed);
	if (printed == -1)
		return (-1);
	if (write(1, &"0123456789abcdef"[n % 16], 1) != 1)
		return (-1);
	printed++;
	return (printed);
}

int	ft_putnbrhexuppper(unsigned int n, int printed)
{
	if (n > 15)
		printed = ft_putnbrhexuppper(n / 16, printed);
	if (printed == -1)
		return (-1);
	if (write(1, &"0123456789ABCDEF"[n % 16], 1) != 1)
		return (-1);
	printed++;
	return (printed);
}

int	ft_putunsignednbr(unsigned int n, int printed)
{
	if (n > 9)
		printed = ft_putunsignednbr(n / 10, printed);
	if (printed == -1)
		return (-1);
	if (write(1, &"0123456789"[n % 10], 1) != 1)
		return (-1);
	printed++;
	return (printed);
}
