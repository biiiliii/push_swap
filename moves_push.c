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

void pa(t_var *var)
{
	t_stack *temp;

	printf("pa\n");
    if (var->len_b > 0)
	{
        temp = var->b.next;
        var->b.next = temp->next;
        temp->prev = &var->a;
        temp->next = &var->a;
        var->a.prev = temp;
        var->len_a++;
        var->len_b--;
    }
}

void pb(t_var *var)
{
	t_stack *temp;

	printf("pb\n");
    if (var->len_a > 0)
	{
        temp = var->a.next;
        var->a.next = temp->next;
        temp->prev = &var->b;
        temp->next = &var->b;
        var->b.prev = temp;
        var->len_b++;
        var->len_a--;
    }
}
