/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nv_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:52:52 by htrindad          #+#    #+#             */
/*   Updated: 2026/08/01 19:53:49 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	nv_pa(t_stack **b, t_stack **a)
{
	push(b, a);
}

void	nv_pb(t_stack **a, t_stack **b)
{
	push(a, b);
}
