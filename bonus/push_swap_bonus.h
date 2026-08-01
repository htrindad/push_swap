/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:28:10 by htrindad          #+#    #+#             */
/*   Updated: 2026/08/01 19:45:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../push_swap.h"
#include "../libs/pslib/pslib.h"

void	nv_sa(t_stack **a);
void	nv_sb(t_stack **b);
void	nv_ss(t_stack **a, t_stack **b);
void	nv_ra(t_stack **a);
void	nv_rb(t_stack **b);
void	nv_rr(t_stack **a, t_stack **b);
void	nv_rra(t_stack **a);
void	nv_rrb(t_stack **b);
void	nv_rrr(t_stack **a, t_stack **b);
void	nv_pa(t_stack **b, t_stack **a);
void	nv_pb(t_stack **a, t_stack **b);

#endif // !PUSH_SWAP_BONUS_H
