/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_gettrack_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:15:52 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 18:19:34 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

static void	ps_getfirst_track(t_track *track)
{
	while (track->prev)
		track = track->prev;
}

int	ps_gettrack_len(t_track *track)
{
	int	i;

	i = 0;
	ps_getfirst_track(track);
	while (track->next)
	{
		i++;
		track = track->next;
	}
	ps_getfirst_track(track);
	return (++i);
}
