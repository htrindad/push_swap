/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:27:44 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/19 18:48:36 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **a)
{
	int	highest;

	highest = ps_gethighest(*a);
	if (highest == (*a)->val)
		ra(a);
	else if (highest == (*a)->next->val)
	{
		sa(a);
		ra(a);
	}
	if ((*a)->val > (*a)->next->val)
		sa(a);
}
