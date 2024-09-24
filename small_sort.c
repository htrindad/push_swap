/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:27:44 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/24 18:04:17 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sorting(t_stack **a, int *val, int highest)
{
	if (highest == val[0])
	{
		ra(a);
		if (val[1] > val[2])
			sa(a);
	}
	else if (highest == val[1])
	{
		if (val[0] > val[2])
		{
			rra(a);
			sa(a);
		}
		else if (val[0] < val[2])
		{
			sa(a);
			ra(a);
		}
	}
	else if (highest == val[2] && val[1] < val[0])
		sa(a);
}

void	small_sort(t_stack **a, int highest)
{
	int	*val;

	if (!ps_sorted(*a))
	{
		val = get_vals(*a);
		sorting(a, val, highest);
		free(val);
	}
}

void	subsmall_sort(t_stack **a, t_stack **b, int highest)
{
	t_stack	*min;

	if (!ps_sorted(*a))
	{
		min = ps_getlowest(*a);
		while (ps_countnode(*a) > 2)
		{
			while (*a != min)
				ra(a);
			pb(a, b);
			min = ps_getlowest(*a);
		}
		small_sort(a, get_vals(*a));
		while (*b)
			pa(a, b);
	}
}
