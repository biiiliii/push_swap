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

void setup_loop(t_var *var, int *values, int len)
{
    t_stack *current, *prev;
    int i = 0;

    var->len_a = len;
    var->a = (t_stack*)malloc(sizeof(t_stack));
    var->a->val = values[0];
    var->a->next = NULL;
    var->a->prev = NULL;
    prev = var->a;
    while (i < len - 1)
    {
        current = (t_stack*)malloc(sizeof(t_stack));
        current->val = values[++i];
        current->next = NULL;
        current->prev = prev;
        prev->next = current;
        prev = current;
    }
    current->next = var->a;
    var->a->prev = current;
}

