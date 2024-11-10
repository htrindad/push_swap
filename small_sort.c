/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:28:50 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 14:27:15 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **a)
{
	t_stack	*highest;

	highest = ps_gethighest(*a);
	if (*a == highest)
		ra(a);
	else if ((*a)->next == highest)
		rra(a);
	if ((*a)->val > (*a)->next->val)
		sa(a);
}

void	subsmall_sort(t_stack **a, t_stack **b)
{
	while (ps_countnode(*a) > 3)
	{
		init_map(*a, *b);
		finish_rotation(a, ps_getlowest(*a), false);
		pb(a, b);
	}
}
