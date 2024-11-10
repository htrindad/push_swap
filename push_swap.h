/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:51:41 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 12:28:36 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libs/pslib/pslib.h"
# include <unistd.h>

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);
void	ps_init(t_stack **a, char **av);
void	small_sort(t_stack **a, int highest);
void	ending(t_stack **stack, char **matrix);
void	normal_ending(t_stack **stack, char **matrix);
int		*get_vals(t_stack *stack);
void	subsmall_sort(t_stack **a, t_stack **b);
void	turk(t_stack **a, t_stack **b);
void	init_stack(t_stack *a, t_stack *b);
void	move_nodes(t_stack **a, t_stack **b);
void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest);
void	rrotate_both(t_stack **a, t_stack **b, t_stack *cheapest);
void	finish_rot(t_stack **node, t_stack *top, bool stack);
bool	cem(int ac, char **av);

#endif
