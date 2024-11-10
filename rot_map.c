/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:44:08 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 13:46:08 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finish_roation(t_stack **node, t_stack *top, bool stack);
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
