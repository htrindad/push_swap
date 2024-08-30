/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:36:37 by htrindad          #+#    #+#             */
/*   Updated: 2024/08/30 17:49:05 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_track *track)
{
	long	temp;

	temp = track->next->val;
	track->next->val = track->val;
	track->val = temp;
}
