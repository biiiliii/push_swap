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

void rra(t_var *var)
{
	if (var->len_a <= 1)
		return;
	
	t_stack *last_node = var->a;
	t_stack *second_last_node = NULL;
	printf("rra\n");

	while (last_node->next)
	{
		second_last_node = last_node;
		last_node = last_node->next;
	}
	
	last_node->next = var->a;
	var->a = last_node;
	second_last_node->next = NULL;
}

void rrb(t_var *var)
{
	if (var->len_b <= 1)
		return;

	t_stack *last_node = var->b;
	t_stack *second_last_node = NULL;
	printf("rrb\n");

	while (last_node->next)
	{
		second_last_node = last_node;
		last_node = last_node->next;
	}
	
	last_node->next = var->b;
	var->b = last_node;
	second_last_node->next = NULL;
}
