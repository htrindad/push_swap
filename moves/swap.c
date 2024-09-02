/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:36:37 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/02 16:03:59 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_track *track)
{
	long	temp;

	temp = track->next->val;
	track->next->val = track->val;
	track->val = temp;
}

void	sa(t_track *a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_track *b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_track *a, t_track *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
