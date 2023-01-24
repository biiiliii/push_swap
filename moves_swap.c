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

void	sa(t_meta *meta)
{
	ft_print("sa");
	if (meta->a->len >= 2)
	{
		meta->a->top_num = meta->a->nums[1];
		meta->a->nums[1] = meta->a->nums[0];
		meta->a->nums[0] = meta->a->top_num;
	}	
}

void	sb(t_meta *meta)
{
	ft_print("sb");
	if (meta->b->len >= 2)
	{
		meta->b->top_num = meta->b->nums[1];
		meta->b->nums[1] = meta->b->nums[0];
		meta->b->nums[0] = meta->b->top_num;
	}	
}

void	ss(t_meta *meta)
{
	ft_printf("ss");
	if (meta->a->len >= 2)
	{
		meta->a->top_num = meta->a->nums[1];
		meta->a->nums[1] = meta->a->nums[0];
		meta->a->nums[0] = meta->a->top_num;
	}
	if (meta->b->len >= 2)
	{
		meta->b->top_num = meta->b->nums[1];
		meta->b->nums[1] = meta->b->nums[0];
		meta->b->nums[0] = meta->b->top_num;
	}
}
