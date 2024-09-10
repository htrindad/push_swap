/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:33:56 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/09 19:52:37 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack **origin, t_stack *target)
{
	target->back = ps_stacknew(*(origin)->val);
	target->back->next = target;
	target = target->back;
	*(origin) = *(origin)->next;
	*(origin)->back = NULL;
}

void	pa(t_stack **b, t_stack *a)
{
	push(&b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack *a)
{
	push(&a, b);
	write(1, "pb\n", 3);
}
