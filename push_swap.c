/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:27:09 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/24 13:11:16 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// this function returns the amount of moves that the program must do to reach
// an specific number, it will return a negative number if the number is closer
// to the bottomside
int	smart_search(int num, t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	j = stack->len;
	while (--j >= 0)
	{
		if (stack->nums[++i] == num)
			return (i);
		else if (stack->nums[j] == num)
			return ((i + 1) * -1);
	}
}

int	chunks(t_meta *meta, int to_find)
{
	int	i;

	if (meta->a->len == 0)
		return (1);

		
	chunks(meta, to_find + 1);
	return (1);
}
