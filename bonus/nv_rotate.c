/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:48:37 by htrindad          #+#    #+#             */
/*   Updated: 2026/08/01 19:50:23 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	nv_ra(t_stack **a)
{
	rotate(a);
}

void	nv_rb(t_stack **b)
{
	rotate(b);
}

void	nv_rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
