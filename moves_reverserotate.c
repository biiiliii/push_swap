/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverserotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:20:22 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/24 17:20:22 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_var *var)
{
	printf("rra\n");
	if (var->len_a > 1)
	{
		var->a.prev->next = &var->a;
		var->a.next->prev = &var->a;
		var->a.prev = var->a.prev->prev;
		var->a.prev->next = &var->a;
		var->a.next = var->a.next->next;
		var->a.next->prev = &var->a;
	}
}

void	rrb(t_var *var)
{
	printf("rrb\n");
	if (var->len_b > 1)
	{
		var->b.prev->next = &var->b;
		var->b.next->prev = &var->b;
		var->b.prev = var->b.prev->prev;
		var->b.prev->next = &var->b;
		var->b.next = var->b.next->next;
		var->b.next->prev = &var->b;
	}
}

void	rrr(t_var *var)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	printf("rrr\n");
	if (var->len_a > 1 && var->len_b > 1)
	{
		temp_a = var->a.next;
		temp_b = var->b.next;
		var->a.next->prev = &var->a;
		var->a.prev->next = &var->a;
		var->a.next = temp_b;
		var->a.prev = temp_b->prev;
		temp_b->prev->next = &var->a;
		temp_b->prev = &var->a;
		var->b.next->prev = &var->b;
		var->b.prev->next = &var->b;
		var->b.next = temp_a;
		var->b.prev = temp_a->prev;
		temp_a->prev->next = &var->b;
		temp_a->prev = &var->b;
	}
}

