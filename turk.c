/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:33:03 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 14:00:24 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	node_mov(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = ps_getcheapest(*b);
}

void	turk(t_stack **a, t_stack **b)
{
	t_stack	*lowest;
	int		la;

	la = ps_countnode(*a);
	if (la == 5)
		subsmall_sort(a, b);
	else
		while (la-- > 3)
			pb(a, b);
	small_sort(a);
	while (*b)
	{
		init_map(a, b);
	}
}
