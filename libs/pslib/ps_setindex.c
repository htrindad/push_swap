/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_setindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:55:36 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/18 17:40:15 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_setindex(t_stack *stack)
{
	int		i;

	i = 0;
	while (stack)
	{
		stack->index = i++;
		stack = stack->next;
	}
}
