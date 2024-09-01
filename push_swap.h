/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:23:30 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/01 16:56:50 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libs/pslib/pslib.h"
# include <string.h>
# include <unistd.h>

void	push(t_track **origin, t_track *target);
void	pa(t_track *a, t_track *b);
void	pb(t_track *a, t_track *b);
void	swap(t_track *track);
void	sa(t_track *a);
void	sb(t_track *b);
void	ss(t_track *a, t_track *b);
void	rotate(t_track *track);
void	ra(t_track *a);
void	rb(t_track *b);
void	rr(t_track *a, t_track *b);
void	rrotate(t_track *track);
void	rra(t_track *a);
void	rrb(t_track *b);
void	rrr(t_track *a, t_track *b);
t_track	*initiate_a(int ac, char **av);

#endif
