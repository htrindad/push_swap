/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:48:29 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/14 16:59:52 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rrotate(t_stack **stack)
{
	t_stack	*first;

	if (!*stack || !(*stack)->next)
		return ;
	first = ps_stacklast(*stack);
	first->prev->next = NULL;
	first->prev = NULL;
	first->next = *stack;
	first->next->prev = first;
	*stack = first;
}

void	rra(t_stack **a)
{
	rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
	write(1, "rrr\n", 4);
}
