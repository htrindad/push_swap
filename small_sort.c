/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:28:50 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 13:48:20 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **a)
{
	t_stack	*highest;

	highest = ps_gethighest(*a);
	if (*a == highest)
		ra(a);
	else if ((*a)->next = highest)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	subsmall_sort(t_stack **a, t_stack **b)
{
	while (ps_countnode(*a) > 3)
	{
		init_map(&a, &b);
		finish_rotation(a, ps_getlowest(*a), false);
		pb(a, b);
	}
}
