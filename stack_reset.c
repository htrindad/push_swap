/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:56:58 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/27 18:48:16 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target(t_stack *a, t_stack *b)
{
	t_stack	*ca;
	t_stack	*target;
	long	bmi;

	while (b)
	{
		bmi = LONG_MAX;
		ca = a;
		while (ca)
		{
			if (ca->val > b->val && ca->val < bmi)
			{
				bmi = ca->val;
				target = ca;
			}
			ca = ca->next;
		}
		if (bmi == LONG_MAX)
			b->target = ps_getlowest(a);
		else
			b->target = target;
		b = b->next;
	}
}

void	init_stack(t_stack *a, t_stack *b)
{
	set_target(a, b);
	ps_setindex(a);
	ps_setindex(b);
	ps_setprice(a, b);
	ps_setcheapest(b);
}
