/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:51:45 by dcastagn          #+#    #+#             */
/*   Updated: 2023/03/20 16:13:16 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"
# include "stdarg.h"
# include "./libft/libft.h"

typedef struct e_stack{
	int				*stack_a;
	int				*stack_b;
	int				size_a;
	int				size_l;
	int				size_b;
	int				*list;
	int				placed_number;
	int				min_num;
	int				nbr;
	struct e_stack	*next;
	struct e_stack	*prev;
	void			*content;

}	t_stack;

int		main(int argc, char **argv);
void	pa(t_stack *stack, int flag);
void	pb(t_stack *stack, int flag);
void	rr(t_stack *stack, int flag);
void	rrr(t_stack *stack, int flag);
void	ss(t_stack *stack, int flag);

#endif