/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:28:50 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 13:31:29 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **a)
{
	t_stack	*highest;

	highest = ps_gethighest(*a);
	if (*a == highest)
		ra(a);
	else if ((*a)->next = highest)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}
