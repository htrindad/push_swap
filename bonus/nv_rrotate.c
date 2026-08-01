/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nv_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:51:10 by htrindad          #+#    #+#             */
/*   Updated: 2026/08/01 20:33:27 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	nv_rra(t_stack **a)
{
	rrotate(a);
}

void	nv_rrb(t_stack **b)
{
	rrotate(b);
}

void	nv_rrr(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
}
