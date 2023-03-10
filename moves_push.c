/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:43:11 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/24 12:28:34 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_var *vars)
{
	t_stack	*temp;

	if (vars->len_a == 0)
		return ;
	ft_printf("pb\n");
	temp = vars->a;
	vars->a = vars->a->next;
	vars->len_a--;
	temp->next = vars->b;
	vars->b = temp;
	vars->len_b++;
}

void	pa(t_var *vars)
{
	t_stack	*temp;

	if (vars->len_b == 0)
		return ;
	temp = vars->b;
	ft_printf("pa\n");
	vars->b = vars->b->next;
	vars->len_b--;
	temp->next = vars->a;
	vars->a = temp;
	vars->len_a++;
}
