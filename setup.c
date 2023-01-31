/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:44:47 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/24 12:22:32 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup_init(t_var *var, int length)
{
	var->len_a = length;
	var->len_b = 0;
	var->moves = 0;
	var->total_nums = length;
}

int	setup_loop(t_var *var, int *values)
{
	t_stack	*new_node;
	int		i;

	var->a.val = values[0];
	var->a.prev = &var->a;
	var->a.next = &var->a;
	i = 1;
	new_node = &var->a;
	while (i < var->len_a)
	{
		new_node->next = (t_stack *)malloc(sizeof(t_stack));
		if (!new_node->next)
			return (-1);
		new_node->next->prev = new_node;
		new_node = new_node->next;
		new_node->val = values[i];
		i++;
	}
	new_node->next = &var->a;
	var->a.prev = new_node;
	var->b.prev = &var->b;
	var->b.next = &var->b;
	return (1);
}
