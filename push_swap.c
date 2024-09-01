/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:26:33 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/01 17:12:42 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_track *a;

	if (ac > 2)
	{
		a = initiate_a(ac, av);
		b = initiate_b();
		if (!a || !b)
			write(1, "Error\n", 5);
		else
			initiate_sort(a, b);
	}
	write(1, "\n", 1);
}
