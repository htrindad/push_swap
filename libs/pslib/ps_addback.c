/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_addback.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:47:37 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/01 17:06:44 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_addback(t_track *track, long val)
{
	while (track->next)
		track = track->next;
	track->next = malloc(sizeof(t_track));
	if (track->next)
	{
		track->next->prev = track;
		track->next->val = val;
	}
	track = track->next;
}
