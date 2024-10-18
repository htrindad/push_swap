/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:53:14 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/18 17:56:29 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

bool	ps_duplicate(t_stack *node)
{
	const t_stack	*first = node;
	t_stack		*tmp;

	while (node)
	{
		tmp = first;
		while (tmp)
		{
			if (tmp->index == node->index)
				tmp = tmp->next;
			if (tmp && tmp->val == node->val)
				return (true);
		}
		node = node->next;
	}
	return (false);
}
