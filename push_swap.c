/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:27:09 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/24 13:11:16 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void smart_search(t_var *var, int value)
{
    int position = 0;
    t_stack *temp;
    int len = var->len_a;
    temp = &var->a;
    while (temp->val != value)
    {
        if (position > len)
        {
            return;
        }
        temp = temp->next;
        position++;
    }
    if (position < var->len_a - position)
    {
        while (var->a.val != value)
        {
            if (position > len)
            {
                return;
            }
            ra(var);
            position++;
        }
    }
    else
    {
        while (var->a.val != value)
        {
            if (position > len)
            {
                return;
            }
            rra(var);
            position++;
        }
    }
}


int	chunks(t_var *var, int to_find)
{
	if (to_find == var->total_nums - 1)
		return (1);
	smart_search(var, to_find);
	pb(var);
	return chunks(var, to_find + 1);
}
