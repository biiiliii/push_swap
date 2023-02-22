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

void	is_in_chunk(t_var *var)
{
	if (var->a->val < var->j * var->n_chunks)
	{
		pb(var);
		var->cont++;
		if (var->b->val < (var->j * var->n_chunks) - (var->n_chunks / 2))
			rb(var);
	}
	else
		ra(var);
}

void	smart_search(t_var *var, int value)
{
	t_stack	*temp;
	int		moves;

	moves = -1;
	temp = var->a;
	while (temp->val != value && ++moves < var->len_a)
		temp = temp->next;
	if (moves <= var->len_a / 2)
	{
		while (var->a->val != value && moves > 0)
		{
			ra(var);
			is_in_chunk(var);
		}
	}
	else
	{
		while (var->a->val != value && moves > 0)
		{
			rra(var);
			is_in_chunk(var);
		}
	}
}

void	smart_search_b(t_var *var, int value)
{
	t_stack	*temp;
	int		moves;

	moves = -1;
	temp = var->b;
	while (temp->val != value && ++moves < var->len_b)
		temp = temp->next;
	if (moves <= var->len_b / 2)
	{
		while (var->b->val != value)
		{
			rb(var);
			if (var->b->val == value - 1)
				pa(var);
		}
	}
	else
	{
		while (var->b->val != value)
		{
			rrb(var);
			if (var->b->val == value - 1)
				pa(var);
		}
	}
}

int	chunks(t_var *var)
{
	if (var->total_nums < 100)
		var->n_chunks = 40;
	else
		var->n_chunks = 500 / 8;
	var->j = 1;
	var->cont = 0;
	while (var->len_a > 0)
	{
		is_in_chunk(var);
		if (var->cont == var->j * var->n_chunks - 1)
			var->j++;
	}
	while (var->len_b > 0)
	{
		smart_search_b(var, var->len_b);
		pa(var);
		if (var->len_a > 1)
			if (var->a->val == var->a->next->val + 1)
				sa(var);
	}
	return (1);
}
