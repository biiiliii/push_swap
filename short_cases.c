/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:40:12 by bimartin          #+#    #+#             */
/*   Updated: 2023/02/21 18:53:53 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_in_order(t_var *var)
{
	t_stack	*tmp;

	tmp = var->a;
	while (tmp->next != NULL)
	{
		if (tmp->val > tmp->next->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int find_min_max(t_stack *stack, int min, int max)
{
	int	i;
	t_stack	*tmp;

	tmp = stack;
	i = 0;
	while (tmp != NULL)
	{	
		if (tmp->val == min && max == 0)
			return (i);
		if (tmp->val == max && min == 0)
			return (i);
		tmp = tmp->next;
		i++;
	}
	return (0);
}

/*
cases:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1

instructions:
ra(var); puts the first number to the last
rra(var); puts the last number to the first
sa(var); swaps the first two numbers
*/
void	sort_three(t_var *var)
{
	t_stack	*a;
	
	a = var->a;
	if (is_in_order(var))
		return ;
	if ()
}
