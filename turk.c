/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:32:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/02 18:10:45 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk(t_stack **a, t_stack **b)
{
	int		len;
	t_stack	*smallest;

	if (!ps_sorted(*a))
	{
		len = ps_countnode(*a);
		while (len-- > 3)
			pb(a, b);
		small_sort(a, ps_highestval(*a));
		while (*b)
		{
			init_stack(*a, *b);
			move_nodes(a, b);
		}
		ps_setindex(*a);
		smallest = ps_getlowest(*a);
		if (smallest->am)
			while (*a != smallest)
				ra(a);
		else
			while (*a != smallest)
				rra(a);
	}
}
