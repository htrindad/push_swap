/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_analysis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:51:50 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/17 17:19:53 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ca_a(t_stack *a, t_stack *b) //cost analysis a
{
	int	len_a;
	int	len_b;

	len_a = ps_countnode(a);
	len_b = ps_countnode(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!a->am)
			a->push_cost = len_a - a->index;
		if (a->target->am)
			a->push_cost += a->target->index;
		else
			a->push_cost += len_b - a->target->index;
		a = a->next;
	}
}
