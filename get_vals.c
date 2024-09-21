/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vals.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:26:26 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/21 16:31:57 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_vals(t_stack *stack)
{
	int	*vals;
	int	i;

	i = 0;
	vals = malloc(ps_countnode(stack) * 4);
	while (a)
	{
		vals[i] = a->val;
		i++;
		a = a->next;
	}
	vals[i] = 0;
	return (vals);
}
