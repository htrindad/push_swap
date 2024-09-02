/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:11:50 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 18:33:40 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	change_focus(bool focus)
{
	if (focus)
		return (false);
	return (true);
}

static int	check_current_track(t_track *track, t_track *sec, bool focus)
{
	long	pivot;
	int	times;

	pivot = ps_get_last(track);
	times = 1;
	while (track->next)
	{
		if (track->val <= pivot)
			use_p(track, sec, focus);
	}
	return (pivot);
}

void	initiate_sort(t_track *a, t_track *b, bool focus)
{
	
}
