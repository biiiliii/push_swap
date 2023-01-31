/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:35:13 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/24 12:22:44 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_var *var)
{
	int	temp;

	printf("sa\n");
	temp = var->a.val;
	var->a.val = var->a.next->val;
	var->a.next->val = temp;
}

void	sb(t_var *var)
{
	int	temp;

	printf("sb\n");
	temp = var->b.val;
	var->b.val = var->b.next->val;
	var->b.next->val = temp;
}

void	ss(t_var *var)
{
	int	temp;

	printf("ss\n");
	temp = var->a.val;
	var->a.val = var->a.next->val;
	var->a.next->val = temp;
	temp = var->b.val;
	var->b.val = var->b.next->val;
	var->b.next->val = temp;
}
