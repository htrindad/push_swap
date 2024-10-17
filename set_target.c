/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:22:54 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/17 17:40:52 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_a(t_stack *a, t_stack *b)
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

void	set_target_b(t_stack *a, t_stack *b)
{
	t_stack	*c_a;
	t_stack	*target;
	long	bmi;

	while (b)
	{
		bmi = LONG_MAX;
		c_a = a;
		while (c_a)
		{
			if (c_a->val > b->val && c_a->val < bmi)
			{
				bmi = c_a->val;
				target = c_a;
			}
			c_a = c_a->next;
		}
		if (bmi == LONG_MAX)
			b->target = ps_getlowest(a);
		else
			b->target = target;
		b = b->next;
	}
}
