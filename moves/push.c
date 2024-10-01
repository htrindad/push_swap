/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:37:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/01 16:06:52 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack **origin, t_stack **target)
{
	t_stack	*tmp;

	if (!*origin)
		return ;
	tmp = *origin;
	*origin = (*origin)->next;
	if (*origin)
		(*origin)->prev = NULL;
	tmp->prev = NULL;
	if (!*target)
	{
		*target = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *target;
		*target = tmp;
		tmp->next->prev = tmp;
	}
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
