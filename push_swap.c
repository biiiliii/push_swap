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

void	smart_search(t_var *var, int value)
{
	t_stack	*temp;
	int		moves;

	moves = 0;
	temp = &var->a;
	while (temp->val != value && moves < var->len_a)
	{
		temp = temp->next;
		moves++;
	}
	if (moves <= var->len_a / 2)
	{
		while (var->a.val != value && moves > 0)
		{
			ra(var);
			moves--;
		}
	}
	else
	{
		moves = var->len_a - moves;
		while (var->a.val != value && moves > 0)
		{
			rra(var);
			moves--;
		}
	}
}

int	chunks(t_var *var, int to_find)
{
	int	i;

	(void)to_find;
	i = -1;
	while (var->len_a > 0 && i < var->total_nums)
	{
		smart_search(var, ++i);
		pb(var);
	}
	return (1);
}
