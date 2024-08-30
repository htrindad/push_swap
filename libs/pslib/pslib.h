/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pslib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:52:56 by htrindad          #+#    #+#             */
/*   Updated: 2024/08/30 19:32:15 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSLIB_H
# define PSLIB_H

typedef struct s_track
{
	long			val;
	struct s_track	*prev;
	struct s_track	*next;
}	t_track;
long	ps_get_last(t_track *track);
long	ps_trackadd_back(t_track *track, long val);
t_track	*ps_tracknew(long content);

#endif
