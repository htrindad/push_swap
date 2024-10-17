/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:32:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/17 17:51:46 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sc(t_stack *stack) //set cheapest
{
	long	cv;
	t_stack	*cn;

	if (!stack)
		return ;
	cv = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cv)
		{
			cv = stack->push_cost;
			cn = stack;
		}
		stack = stack->next;
	}
	cn->cheapest = true;
}

static void	init_indexes(t_stack **a, t_stack **b)
{
	ps_reset(a);
	ps_reset(b);
}

static void	init_nodes_a(t_stack **a, t_stack **b)
{
	init_indexes(a, b);
	set_target_a(*a, *b);
	ca_a(*a, *b);
	sc(*a);
}

static void	init_nodes_b(t_stack **a, t_stack **b)
{
	init_indexes(a, b);
	set_target_b(*a, *b);
}

void	turk(t_stack **a, t_stack **b)
{
	int	len;

	len = ps_countnode(*a);
	if (len-- > 3 && !ps_sorted(*a))
		pb(a, b);
	if (len-- > 3 && !ps_sorted(*a))
		pb(a, b);
	while (len-- > 3 && !ps_sorted(*a))
	{
		init_nodes_a(a, b);
		move_a_to_b(a, b);
	}
	small_sort(a, ps_highestval(*a));
	while (*b)
	{
		init_nodes_b(a, b);
		move_b_to_a(a, b);
	}
	ps_reset(a);
	mot(a);
}
