/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segregate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 21:15:16 by htrindad          #+#    #+#             */
/*   Updated: 2026/08/01 00:06:40 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static inline void	set_rank(t_stack *head, const int la,
	int *restrict instances)
{
	t_stack	*node;
	t_stack	*cmp;
	int		csize;
	int		pos;

	csize = (la + SEG - 1) / SEG;
	node = head;
	while (node)
	{
		pos = 0;
		cmp = head;
		while (cmp)
		{
			if (cmp->val < node->val)
				pos++;
			cmp = cmp->next;
		}
		node->rank = pos / csize;
		instances[node->rank]++;
		node = node->next;
	}
}

static inline bool	next_node(t_stack *node, int const seg_max)
{
	t_stack	*start;
	t_stack	*end;

	start = node;
	end = ps_stacklast(node);
	while (start && end
		&& start->rank != seg_max && end->rank != seg_max)
	{
		start = start->next;
		end = end->prev;
	}
	if (end && end->rank == seg_max)
		return (true);
	else
		return (false);
}

static inline void	remove_rank(t_stack **a, t_stack **b,
	int *restrict rank, int const seg_max)
{
	bool	nn;
	int		la;

	la = ps_countnode(*a);
	nn = next_node(*a, seg_max);
	while (*rank && la > 3)
	{
		if ((*a)->rank == seg_max)
		{
			pb(a, b);
			la--;
			(*rank)--;
			nn = next_node(*a, seg_max);
		}
		else if (nn)
			rra(a);
		else
			ra(a);
	}
}

static inline int	*new_ranks(t_stack **a)
{
	int	*ranks;
	int	i;

	i = 0;
	ranks = malloc(SEG * sizeof(int));
	if (ranks == NULL)
	{
		ps_freestack(a);
		ps_quiterror();
	}
	while (i < SEG)
		ranks[i++] = 0;
	return (ranks);
}

void	quick_sort(t_stack **a, t_stack **b, int la)
{
	int	*ranks;
	int	seg_max;

	seg_max = 0;
	ranks = new_ranks(a);
	set_rank(*a, la, ranks);
	while (seg_max < SEG)
	{
		remove_rank(a, b, &ranks[seg_max], seg_max);
		seg_max++;
	}
	free(ranks);
}
