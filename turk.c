/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:32:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/14 17:52:42 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sc(t_stack *stack) //set cheapest
{
	long	cv;
	t_stack	*cn;

	if (!stack)
		return ;
	cv = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cv)
		{
			cv = stack->push_cost;
			cn = stack;
		}
		stack = stack->next;
	}
	cn->cheapest = true;
}

static void	ca(t_stack *a, t_stack *b) //cost analysis
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

static void	set_target(t_stack *a, t_stack *b)
{
	t_stack	*c_b;
	t_stack	*target;
	long	bmi;

	while (a)
	{
		bmi = LONG_MIN;
		c_b = b;
		while (c_b)
		{
			if (c_b->val < a->val && c_b->val > bmi)
			{
				bmi = c_b->val;
				target = c_b;
			}
			c_b = c_b->next;
		}
		if (bmi == LONG_MIN)
			a->target = ps_gethighest(b);
		else
			a->target = target;
		a = a->next;
	}
}

static void	init_nodes(t_stack **a, t_stack **b)
{
	ps_reset(a);
	ps_reset(b);
	set_target(*a, *b);
}

void	turk(t_stack **a, t_stack **b)
{
	int	len;

	len = ps_countnode(*a);
	if (len-- > 3 && !ps_sorted(*a))
		pb(a, b);
	if (len-- > 3 && !ps_sorted(*a))
		pb(a, b);
	while (len-- > 3 && !ps_sorted(*a))
	{
		init_nodes(a, b);
	}
}
