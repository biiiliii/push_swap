/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:38:59 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/27 17:38:59 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *ft_free(t_var *var)
{
	t_stack	*tmp;
	t_stack	*next;

	tmp = var->a;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	free(var);
	return (NULL);
}

int	main(int argc, char **argv)
{
	t_var	*var;
	int		*s_t_i;
	int		*g_o;


	s_t_i = string_to_int(argc, argv);
	g_o = get_order(s_t_i, argc - 1);
	var = setup_program(g_o, argc - 1);
	if (!var)
		return (printf("Malloc error"));
	//if (argc == 4)
		//sort_three(var);
	//else if (argc == 5)
	//else
	chunks(var);
	ft_free(var);
	free(s_t_i);
	free(g_o);
	return (0);
}
