/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:48:42 by htrindad          #+#    #+#             */
/*   Updated: 2024/08/30 19:54:05 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_track **origin, t_track *target)
{
	target->prev = malloc(sizeof(t_track));
	target->prev->next = target;
	target->prev->val = (*origin)->val;
	*origin = (*origin)->next;
	(*origin)->prev = NULL;
}
