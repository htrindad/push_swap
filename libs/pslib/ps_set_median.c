/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_set_median.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:31:38 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/18 17:32:36 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_set_median(t_stack *a)
{
	const int	max = ps_countnode(a);

	while (a)
	{
		if (a->index > max / 2)
			a->am = true;
		else
			a->am = false;
		a = a->next;
	}
}
