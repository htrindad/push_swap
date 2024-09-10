/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:59:39 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/10 16:03:19 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rrotate(t_stack *stack)
{
	long	tmp;

	while (stack->next)
		stack = stack->next;
	tmp = stack->val;
	while (stack->prev)
	{
		stack->val = stack->prev->val;
		stack = stack->prev;
	}
	stack->val = tmp;
}

void	rra(t_stack *a)
{
	rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	rrotate(b);
	write(1, "rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rrotate(a);
	rrotate(b);
	write(1, "rrr\n", 4);
}
