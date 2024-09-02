/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_get_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:28:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 17:41:37 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

long	*ps_get_last(t_track *track)
{
	long	val;

	while (track->next)
		track = track->next;
	val = track->val;
	while (track->prev)
		track = track->prev;
	return (val);
}
