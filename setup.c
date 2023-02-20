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

t_var	*setup_program(int *values, int num_values)
{
	t_var	*vars = (t_var *)malloc(sizeof(t_var));
	int i;
	vars->a = NULL;
	vars->b = NULL;
	vars->len_a = num_values;
	vars->len_b = 0;
	vars->moves = 0;
	vars->total_nums = num_values;
	
	i = num_values - 1;
	while (i >= 0)
	{
		t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
		new_node->val = values[i];
		new_node->next = vars->a;
		vars->a = new_node;
		i--;
	}
	return (vars);
}

