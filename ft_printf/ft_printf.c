/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:40:51 by bimartin          #+#    #+#             */
/*   Updated: 2022/10/13 17:08:43 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	print_variable(va_list args, char conv)
{
	int	printed;

	printed = 0;
	if (conv == 'c')
		printed = ft_putchar(va_arg(args, int));
	else if (conv == 's')
		printed = ft_putstr(va_arg(args, char *));
	else if (conv == 'p')
		printed = ft_pointer(va_arg(args, unsigned long long), printed);
	else if (conv == 'd' || conv == 'i')
		printed = ft_putnbr(va_arg(args, int), printed);
	else if (conv == 'u')
		printed = ft_putunsignednbr(va_arg(args, unsigned int), printed);
	else if (conv == 'x')
		printed = ft_putnbrhexlower(va_arg(args, unsigned int), printed);
	else if (conv == 'X')
		printed = ft_putnbrhexuppper(va_arg(args, unsigned int), printed);
	else if (conv == '%')
		printed = ft_putchar('%');
	return (printed);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		printed;
	int		tmp;

	va_start(args, str);
	i = -1;
	printed = 0;
	while (str[++i])
	{
		tmp = printed;
		if (str[i] == '%')
			printed += print_variable(args, str[++i]);
		else
			printed += ft_putchar(str[i]);
		if (tmp > printed)
			return (-1);
	}
	va_end(args);
	return (printed);
}
