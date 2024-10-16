/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pfp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:02:21 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/16 15:04:08 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack **a, t_stack **b, t_stack *cn)
{
	while (*b != cn->target && *a != cn)
		rr(a, b);
	ps_setindex(a);
	ps_setindex(b);
}

void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cn)
{
	while (*b != cn->target && *a != cn)
		rrr(a, b);
	ps_setindex(a);
	ps_setindex(b);
}

void	pfp(t_stack **node, t_stack *top_node, bool way) //prep for push
{
	while (*node != top_node)
	{
		if (!way)
		{
			if (top_node->am)
				ra(node);
			else
				rra(node);
		}
		else
		{
			if (top_node->am)
				rb(node);
			else
				rrb(node);
		}
	}
}
