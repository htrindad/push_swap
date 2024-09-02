/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:28:10 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 16:03:49 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_track *track)
{
	long	first;

	first = track->val;
	while (track->next)
	{
		track->val = track->next->val;
		track = track->next;
	}
	track->val = first;
	while (track->prev)
		track = track->prev;
}

void	ra(t_track *a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_track *b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_track *a, t_track *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
