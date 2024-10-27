/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:54:30 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/27 18:47:25 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*a != cheapest->target && *b != cheapest)
		rr(a, b);
	ps_setindex(*a);
	ps_setindex(*b);
}

static void	rrotate_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*a != cheapest->target && *b != cheapest)
		rrr(a, b);
	ps_setindex(*a);
	ps_setindex(*b);
}

static void	finish_rot(t_stack **node, t_stack *top, bool stack)
{
	while (*node != top)
	{
		if (!stack)
		{
			if (top->am)
				ra(node);
			else
				rra(node);
		}
		else
		{
			if (top->am)
				rb(node);
			else
				rrb(node);
		}
	}
}

void	move_nodes(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = ps_getcheapest(*b);
	if (cheapest->am && cheapest->target->am)
		rotate_both(a, b, cheapest);
	else if (!cheapest->am && !cheapest->target->am)
		rrotate_both(a, b, cheapest);
	finish_rot(b, cheapest, true);
	finish_rot(a, cheapest->target, false);
	pa(b, a);
}
