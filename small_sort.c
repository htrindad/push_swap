/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:27:44 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/21 16:27:08 by htrindad         ###   ########.fr       */
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

	val = get_vals(*a);
	sorting(a, val, highest);
	free(val);
}
