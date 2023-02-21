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

void print_stack_a(t_var *var)
{
    t_stack *temp = var->a;
    printf("Stack A: ");
    for (int i = 0; i < var->len_a; i++)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

void print_stack_b(t_var *var)
{
    t_stack *temp = var->b;
    printf("Stack B: ");
    for (int i = 0; i < var->len_b; i++)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

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

	moves = 0;
	temp = var->a;
	while (temp->val != value && moves < var->len_a)
	{
		temp = temp->next;
		moves++;
	}
	if (moves <= var->len_a / 2)
	{
		while (var->a->val != value && moves > 0)
		{
			ra(var);
			is_in_chunk(var);
			moves--;
		}
	}
	else
	{
		moves = var->len_a - moves;
		while (var->a->val != value && moves > 0)
		{
			rra(var);
			is_in_chunk(var);
			moves--;
		}
	}
}

void	smart_search_b(t_var *var, int value)
{
	t_stack	*temp;
	int		moves;

	moves = 0;
	temp = var->b;
	while (temp->val != value && moves < var->len_b)
	{
		temp = temp->next;
		moves++;
	}
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
		moves = var->len_b - moves;
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
	var->n_chunks = var->total_nums > 100 ? 60 : 40;
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
