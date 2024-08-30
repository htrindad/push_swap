/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_trackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:15:26 by htrindad          #+#    #+#             */
/*   Updated: 2024/08/30 19:29:21 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_trackadd_back(t_track *track, long val)
{
	while (stack->next)
		stack = stack->next;
	stack->next = malloc(sizeof(t_stack));
	if (!stack->next)
		return ;
	stack->next->val = val;
	while (stack->back)
		stack = stack->back;
}
