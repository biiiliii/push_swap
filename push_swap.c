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
    t_stack *temp = &var->a;
    while (temp->val != value) {
        temp = temp->next;
        position++;
    }
    if (position < var->len_a - position) {
        while (var->a.val != value)
            ra(var);
    }
    else {
        while (var->a.val != value)
            rra(var);
    }
}

int	chunks(t_var *var, int to_find)
{
	int	i;
		
	chunks(var, to_find + 1);
	return (1);
}
