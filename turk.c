/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:33:03 by htrindad          #+#    #+#             */
/*   Updated: 2026/08/01 00:02:07 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/pslib/pslib.h"
#include "push_swap.h"

static void	node_mov(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = ps_getcheapest(*b);
	if (cheapest->am && cheapest->target->am)
		rotate_both(a, b, cheapest);
	else if (!cheapest->am && !cheapest->target->am)
		revrotate_both(a, b, cheapest);
	finish_rotation(b, cheapest, true);
	finish_rotation(a, cheapest->target, false);
	pa(b, a);
}

void	turk(t_stack **a, t_stack **b)
{
	t_stack	*lowest;
	int		la;

	la = ps_countnode(*a);
	if (la == 5)
		subsmall_sort(a, b);
	else if (la > 120)
		quick_sort(a, b, la);
	else
		while (la-- > 3)
			pb(a, b);
	small_sort(a);
	while (*b)
	{
		init_map(*a, *b);
		node_mov(a, b);
	}
	ps_setindex(*a);
	lowest = ps_getlowest(*a);
	if (lowest->am)
		while (*a != lowest)
			ra(a);
	else
		while (*a != lowest)
			rra(a);
}
