/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:58:21 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/16 15:18:50 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cn;

	cn = ps_getcheapest(*a);
	if (cn->am && cn->target->am)
		rotate_both(a, b, cn);
	else if (!cn->am && !cn->target->am)
		rev_rotate_both(a, b, cn);
	pfp(a, cn, false);
	pfp(b, cn->target, true);
	pb(a, b);
}
