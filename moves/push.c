/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:37:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/17 16:57:30 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack *origin, t_stack **target)
{
	(*target)->prev = origin;
	(*target)->prev->next = *target;
	origin = origin->next;
	origin->prev = NULL;
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, &a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, &b);
	write(1, "pb\n", 3);
}
