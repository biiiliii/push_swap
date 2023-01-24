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

int	fill_nulls(t_meta *meta)
{
	int	i;

	meta->b->nums = malloc(sizeof(int) * (meta->total_nums + 1));
	if (!meta->b->nums)
		return (-1);
	i = 0;
	while (i < meta->total_nums + 1)
		meta->b->nums[++i] = NULL;
	return (1);
}

int	setup(t_meta *meta)
{
	if (!fill_nulls(meta))
		return (-1);
	meta->b->len = 0;
	meta->top_num->b = NULL	
}
