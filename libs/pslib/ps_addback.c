/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_addback.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:47:37 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 15:02:03 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_addback(t_track *track, long val)
{
	while (track->next)
		track = track->next;
	track->next = ps_tracknew(val);
	if (track->next == NULL)
		return ;
	track->next->prev = track;
	if (track->next)
	{
		track->next->prev = track;
		track->next->val = val;
	}
	track = track->next;
}
