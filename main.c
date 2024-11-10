/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:06:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 13:28:41 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (-1);
	if (ac == 2)
		av = ps_split(av[1], ' ');
	ps_init(&a, av + 1, ac == 2);
	if (!ps_sorted(a))
	{
		if (ps_countnode(a) == 2)
			sa(&a);
		else if (ps_countnode(a) == 3)
	}
}
