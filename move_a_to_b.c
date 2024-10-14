/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:58:21 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/14 18:17:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_both(t_stack **a, t_stack **b, t_stack *cn)
{
	while (*b != cn->target && *a != cn)
		rr(a, b);
	ps_setindex(a);
	ps_setindex(b);
}

static void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cn)
{
	while (*b != cn->target && *a != cn)
		rrr(a, b);
	ps_setindex(a);
	ps_setindex(b);
}

void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cn;

	cn = ps_getcheapest(*a);
	if (cn->am && cn->target->am)
		rotate_both(a, b, cn);
	else if (!cn->am && !cn->target->am)
}
