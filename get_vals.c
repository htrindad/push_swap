/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vals.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:26:26 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/24 16:57:19 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_vals(t_stack *stack)
{
	int	*vals;
	int	i;

	i = 0;
	vals = malloc(ps_countnode(stack) * 4);
	while (stack)
	{
		vals[i] = stack->val;
		i++;
		stack = stack->next;
	}
	vals[i] = 0;
	return (vals);
}
