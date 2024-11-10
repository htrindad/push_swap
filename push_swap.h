/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:51:41 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 14:34:54 by htrindad         ###   ########.fr       */
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
void	small_sort(t_stack **a);
void	turk(t_stack **a, t_stack **b);
void	init_map(t_stack *a, t_stack *b);
void	finish_rotation(t_stack **node, t_stack *top, bool stack);
void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest);
void	revrotate_both(t_stack **a, t_stack **b, t_stack *cheapest);
void	ps_init(t_stack **a, char **av, bool one);
void	subsmall_sort(t_stack **a, t_stack **b);
void	finish_rotation(t_stack **node, t_stack *top, bool stack);

#endif
