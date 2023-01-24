/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bimartin <bimartin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:13:23 by bimartin          #+#    #+#             */
/*   Updated: 2023/01/18 15:25:14 by bimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error_manager(int argc, char **argv)
{
	int	i;

	while (--argc >= 0)
	{
		i = 0;
		while (argv[argc][++i])
		{
			if (!(argv[argc][i] >= '0' && argv[argc][i] <= '9'))
				return (0);
		}
	}
}
