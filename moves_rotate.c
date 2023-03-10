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
	t_stack	*last_node;

	if (var->len_a <= 1)
		return ;
	last_node = var->a;
	ft_printf("ra\n");
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = var->a;
	var->a = var->a->next;
	last_node->next->next = NULL;
}

void	rb(t_var *var)
{
	t_stack	*last_node;

	if (var->len_b <= 1)
		return ;
	last_node = var->b;
	ft_printf("rb\n");
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = var->b;
	var->b = var->b->next;
	last_node->next->next = NULL;
}
