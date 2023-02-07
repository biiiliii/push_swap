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

int	main(int argc, char **argv)
{
	t_var	*var;

	var = (t_var*)malloc(sizeof(t_var));
	setup_init(var, argc - 1);
	setup_loop(var, string_to_int(argc, argv), argc - 1);
	chunks(var);
	return (0);
}
