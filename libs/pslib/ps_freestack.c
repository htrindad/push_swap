/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_freestack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:11:27 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/19 17:13:47 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_freestack(t_stack **node)
{
	t_stack	*tmp;
	t_stack	*current;

	if (node == NULL)
		return ;
	current = *node;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*node = NULL;
}
