/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:44:08 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 14:44:53 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*a != cheapest->target && *b != cheapest)
		rr(a, b);
	ps_setindex(*a);
	ps_setindex(*b);
}

void	revrotate_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*a != cheapest->target && *b != cheapest)
		rrr(a, b);
	ps_setindex(*a);
	ps_setindex(*b);
}

void	finish_rotation(t_stack **node, t_stack *top, bool stack)
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
