/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:05:55 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/24 17:05:55 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_var *var)
{
	t_stack	*temp;

	printf("ra\n");
	if (var->len_a > 1)
	{
		var->a.prev->next = &var->a;
		var->a.next->prev = &var->a;
		temp = var->a.prev;
		var->a.prev = temp->prev;
		var->a.prev->next = &var->a;
		var->a.next = temp;
		temp->prev = &var->a;
	}
}

void	rb(t_var *var)
{
	t_stack	*temp;

	printf("rb\n");
	if (var->len_b > 1)
	{
		var->b.prev->next = &var->b;
		var->b.next->prev = &var->b;
		temp = var->b.prev;
		var->b.prev = temp->prev;
		var->b.prev->next = &var->b;
		var->b.next = temp;
		temp->prev = &var->b;
	}
}

void	rr(t_var *var)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	printf("rr\n");
	if (var->len_a > 1 && var->len_b > 1)
	{
		temp_a = var->a.prev;
		temp_b = var->b.prev;
		var->a.prev->next = &var->a;
		var->a.next->prev = &var->a;
		var->a.prev = temp_b->prev;
		var->a.prev->next = &var->a;
		var->a.next = temp_b;
		temp_b->prev = &var->a;
		var->b.prev->next = &var->b;
		var->b.next->prev = &var->b;
		var->b.prev = temp_a->prev;
		var->b.prev->next = &var->b;
		var->b.next = temp_a;
		temp_a->prev = &var->b;
	}
}
