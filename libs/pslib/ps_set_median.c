/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_set_median.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:31:38 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/14 16:50:11 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_set_median(t_stack **a)
{
	const int	max = ps_countnode(*a);
	t_stack		*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->index > max / 2)
			tmp->am = true;
		else
			tmp->am = false;
		tmp = tmp->next;
	}
}
