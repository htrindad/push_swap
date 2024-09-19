/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_gethighest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:30:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/19 18:32:23 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

int	ps_gethighest(t_stack *node)
{
	int	val;

	val = node->val;
	node = node->next;
	while (node)
	{
		if (val < node->val)
			val = node->val;
		node = node->next;
	}
	return (val);
}
