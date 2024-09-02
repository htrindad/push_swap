/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:49:50 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 18:13:25 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	use_s(t_track *track, bool focus)
{
	if (!focus)
		sa(track);
	else
		sb(track);
}

void	use_p(t_track *track, t_track *target, bool focus)
{
	if (focus)
		pa(track, target);
	else
		pb(track, target);
}

void	use_r(t_track *track, bool focus)
{
	if (focus)
		rb(track);
	else
		ra(track);
}

void	use_rr(t_track *track, bool focus)
{
	if (focus)
		rrb(track);
	else
		rra(track);
}
