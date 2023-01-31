/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:23:51 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/27 18:23:51 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_isspace(int c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
        return 1;
    return 0;
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int ft_atoi(const char *str)
{
    int sign;
    int res;
    int i;

	sign = 1;
	res = 0;
	i = 0;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (ft_isdigit(str[i]))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }

    return sign * res;
}

int *string_to_int(int argc, char **argv)
{
    int *numbers = malloc(argc * sizeof(int));
    int i;
    for (i = 1; i < argc; i++)
    {
        numbers[i - 1] = ft_atoi(argv[i]);
    }
    return numbers;
}