/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:27:56 by bimartin          #+#    #+#             */
/*   Updated: 2023/02/24 16:21:42 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[include <>]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>


/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[functions]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
int			ft_printf(const char *str, ...);
int			ft_strlen2(char *str);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putnbr(int n, int printed);
int			ft_putnbrhexlower(unsigned int n, int printed);
int			ft_putnbrhexuppper(unsigned int n, int printed);
int			ft_putunsignednbr(unsigned int n, int printed);
int			print_ptr(uintptr_t ptr, int printed);
int			ptrlen(uintptr_t ptr);
int			ft_pointer(unsigned long long ptr, int printed);

#endif