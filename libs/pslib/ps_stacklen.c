/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stacklen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:35:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/10 16:53:55 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

static void	stackfirst(t_stack *stack)
{
	while (stack->prev)
		stack = stack->prev;
}

int	ps_stacklen(t_stack *stack)
{
	int	i;

	stackfirst(stack);
	i = 0;
	while (stack->next)
	{
		i++;
		stack = stack->next;
	}
	stackfirst(stack);
	return (i);
}
