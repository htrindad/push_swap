/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:27:44 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/29 17:43:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sorting(t_stack **a, int highest)
{
	if ((*a)->val == highest)
		ra(a);
	else if ((*a)->next->val == highest)
		rra(a);
	if ((*a)->val > (*a)->next->val)
		sa(a);
}

void	small_sort(t_stack **a, int highest)
{
	if (!ps_sorted(*a))
	{
		if (ps_countnode(*a) == 2)
			sa(a);
		else
			sorting(a, highest);
	}
}

static void	seg_min(t_stack **a, t_stack **b, t_stack *min)
{
	if (*a != min)
	{
		while (*a != min)
		{
			if (min->am)
				ra(a);
			else
				rra(a);
		}
	}
	pb(a, b);
}

void	subsmall_sort(t_stack **a, t_stack **b)
{
	t_stack	*min;

	if (!ps_sorted(*a))
	{
		while (ps_countnode(*a) > 3)
		{
			init_stack(*a, *b);
			min = ps_getlowest(*a);
			seg_min(a, b, min);
		}
		init_stack(*a, *b);
		small_sort(a, ps_highestval(*a));
		while (*b)
			pa(b, a);
	}
}
