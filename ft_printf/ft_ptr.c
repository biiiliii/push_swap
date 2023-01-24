/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:55:02 by bimartin          #+#    #+#             */
/*   Updated: 2022/10/13 14:56:18 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptrlen(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

int	print_ptr(uintptr_t ptr, int printed)
{
	if (ptr > 15)
		printed = print_ptr(ptr / 16, printed);
	if (printed == -1)
		return (-1);
	if (write(1, &"0123456789abcdef"[ptr % 16], 1) != 1)
		return (-1);
	return (printed);
}

int	ft_pointer(unsigned long long ptr, int printed)
{
	if (!ptr)
	{
		if (write(1, &"0x0", 3) != 3)
			return (-1);
		return (3);
	}
	if (write(1, "0x", 2) != 2)
		return (-1);
	printed = print_ptr(ptr, printed);
	if (printed == -1)
		return (-1);
	printed = ptrlen(ptr) + 2;
	return (printed);
}
