/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:52:18 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/01 16:05:51 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrotate(t_track *track)
{
	long	last;

	last = ps_get_last(track);
	while (track->prev)
	{
		track->val = track->prev->val;
		track = track->prev;
	}
	track->val = last;
}

void	rra(t_track *a)
{
	rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_track *b)
{
	rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_track *a, t_track *b)
{
	rrotate(a);
	rrotate(b);
	write(1, "rrr\n", 4);
}
