/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:55:26 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/01 17:09:06 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_track	*initiate_a(int ac, char **av)
{
	size_t	i;
	t_track	*a;

	i = 1;
	a = ps_tracknew(ps_atol(av[i++]));
	if (a == NULL || !a->val)
		return (NULL);
	else
	{
		while (i < ac)
		{
			a = ps_addback(ps_atol(av[i++]));
			if (a == NULL || !a->val)
				return (NULL);
		}
	}
}

t_track	*initiate_b()
{
	t_track	*b;

	b = malloc(sizeof(t_track));
	return (b);
}
