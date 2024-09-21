/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ending.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:17:22 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/21 16:16:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normal_ending(t_stack **stack, char **matrix)
{
	if (stack)
		ps_freestack(stack);
	if (matrix)
		ps_freematrix(matrix);
}

void	ending(t_stack **stack, char **matrix)
{
	ps_freestack(stack);
	ps_freematrix(matrix);
	ps_quiterror();
}
