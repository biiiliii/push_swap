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

	var = setup_program(get_order(string_to_int(argc, argv), argc - 1), argc - 1);
	if (argc == 4)
		sort_three(var);
	//else if (argc == 5)
	else
		chunks(var);
	return (0);
}
