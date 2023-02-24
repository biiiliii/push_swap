/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:37:46 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/24 11:45:55 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[includes]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
# include <stdlib.h>
# include <stdio.h>
# include "ft_printf/ft_printf.h"

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[Defines]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[Structs]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

typedef struct s_stack
{	
	int				val;
	struct s_stack	*next;
}	t_stack;

typedef struct s_var
{
	struct s_stack		*a;
	struct s_stack		*b;
	int					len_a;
	int					len_b;
	int					moves;
	int					total_nums;
	int					cont;
	int					n_chunks;
	int					j;
}	t_var;

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[Error manager]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[Setups]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
t_var		*setup_program(int *values, int num_values);

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[moves]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
void		sa(t_var *var);
void		sb(t_var *var);
void		ss(t_var *var);
void		pa(t_var *var);
void		pb(t_var *var);
void		ra(t_var *var);
void		rb(t_var *var);
void		rr(t_var *var);
void		rra(t_var *var);
void		rrb(t_var *var);
void		rrr(t_var *var);

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[functions]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
int			ft_atoi(const char *str);
int			*string_to_int(int argc, char **argv);
int			*get_order(int *values, int size);
void		sort_three(t_var *var);
void		smart_search(t_var *var, int value);
int			chunks(t_var *var);

#endif