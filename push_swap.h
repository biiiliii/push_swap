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

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[Defines]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[Structs]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

typedef struct s_stack
{	
	int				val;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct s_var
{
	struct s_stack		a;
	struct s_stack		b;
	int					len_a;
	int					len_b;
	int					moves;
	int					total_nums;
}	t_var;


/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[Error manager]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[Setups]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
void		setup_init(t_var *var, int length);
int			setup_loop(t_var *var, int *values);

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-[setups]-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
void		setup_init(t_var *var, int length);
int			setup_loop(t_var *var, int *values);

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
void		smart_search(t_var *var, int value);
int			chunks(t_var *var, int to_find);


#endif