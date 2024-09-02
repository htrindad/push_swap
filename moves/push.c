/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:48:42 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 16:03:43 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_track **origin, t_track *target)
{
	target->prev = malloc(sizeof(t_track));
	target->prev->next = target;
	target->prev->val = (*origin)->val;
	target = target->prev;
	*origin = (*origin)->next;
	(*origin)->prev = NULL;
}

void	pa(t_track *a, t_track *b)
{
	push(&a, b);
	write(1, "pa\n", 3);
}

void	pb(t_track *a, t_track *b)
{
	push(&b, a);
	write(1, "pb\n", 3);
}
