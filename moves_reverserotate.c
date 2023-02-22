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
	t_stack	*last_node;
	t_stack	*second_last_node;

	if (var->len_a <= 1)
		return ;
	last_node = var->a;
	second_last_node = NULL;
	ft_printf("rra\n");
	while (last_node->next)
	{
		second_last_node = last_node;
		last_node = last_node->next;
	}
	last_node->next = var->a;
	var->a = last_node;
	second_last_node->next = NULL;
}

void	rrb(t_var *var)
{
	t_stack	*last_node;
	t_stack	*second_last_node;

	if (var->len_b <= 1)
		return ;
	last_node = var->b;
	second_last_node = NULL;
	ft_printf("rrb\n");
	while (last_node->next)
	{
		second_last_node = last_node;
		last_node = last_node->next;
	}
	last_node->next = var->b;
	var->b = last_node;
	second_last_node->next = NULL;
}
