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

void print_stack_a(t_var *var)
{
    t_stack *temp = var->a;
    printf("Stack A: ");
    for (int i = 0; i < var->len_a; i++)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

void print_stack_b(t_var *var)
{
    t_stack *temp = var->b;
    printf("Stack B: ");
    for (int i = 0; i < var->len_b; i++)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

void	smart_search(t_var *var, int value)
{
	t_stack	*temp;
	int		moves;

	moves = 0;
	temp = var->a;
	while (temp->val != value && moves < var->len_a)
	{
		temp = temp->next;
		moves++;
	}
	if (moves <= var->len_a / 2)
	{
		while (var->a->val != value && moves > 0)
		{
			ra(var);
			moves--;
		}
	}
	else
	{
		moves = var->len_a - moves;
		while (var->a->val != value && moves > 0)
		{
			rra(var);
			moves--;
		}
	}
}

int	chunks(t_var *var)
{
	int	i;
	int len_a;
	len_a = var->len_a;
	i = 0;
	while (++i <= len_a)	
	{
		smart_search(var, i);
		pb(var);
	}
	return (1);
}
