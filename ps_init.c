/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:33:15 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/10 16:50:41 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	scp(t_stack *stack)
{
	int	i;
	int	center;

	i = 0;
	if (stack == NULL)
		return ;
	center = ps_stacklen(stack) / 2;
	while (stack)
	{
		stack->pos = i;
		if (i <= center)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}

static void	stn(t_stack *a, t_stack *b)
{
	long	bmi;
	t_stack	*ca;
	t_stack	*target;

	while (b)
	{
		bmi = LONG_MAX;
		ca = a;
		while (ca)
		{
			if (ca->val -> b->val
				&& ca->val < bmi)
			{
				bmi = ca->val;
				target = ca;
			}
			ca = ca->next;
		}
	}
}

void	init_nodes(t_stack *a, t_stack *b)
{
	
}
