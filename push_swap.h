/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:23:30 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 17:52:02 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libs/pslib/pslib.h"
# include <string.h>
# include <unistd.h>

void	pa(t_track *a, t_track *b);
void	pb(t_track *a, t_track *b);
void	sa(t_track *a);
void	sb(t_track *b);
void	ss(t_track *a, t_track *b);
void	ra(t_track *a);
void	rb(t_track *b);
void	rr(t_track *a, t_track *b);
void	rra(t_track *a);
void	rrb(t_track *b);
void	rrr(t_track *a, t_track *b);
t_track	*initiate_a(int ac, char **av);
t_track	*initiate_b();
void	initiate_sort(t_track *a, t_track *b, bool focus);
void	use_swap(t_track *track, bool focus);
void	use_push(t_track *track, bool focus);

#endif
