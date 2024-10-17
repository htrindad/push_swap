/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:36:46 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/17 17:39:21 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mot(t_stack **a)
{
	while ((*a)->val != ps_getlowest(*a)->val)
	{
		if (ps_getlowest(*a)->am)
			ra(a);
		else
			rra(a);
	}
}
