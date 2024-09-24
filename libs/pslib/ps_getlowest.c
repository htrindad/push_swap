/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_getlowest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:39:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/24 17:24:51 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

t_stack	*ps_getlowest(t_stack *node)
{
	t_stack	*lowest;

	lowest = node;
	while (node)
	{
		if (node->val < lowest->val)
			lowest = node;
		node = node->next;
	}
	return (lowest);
}
