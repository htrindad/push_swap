/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:09:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 14:54:56 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	error_s(char *str)
{
	if (!(*str == '+' || *str == '-' \
			|| (*str >= '0' && *str <= '9')))
		return (true);
	if ((*str == '+' || *str == '-') \
			&& !(str[1] >= '0' && str[1] <= '9'))
		return (true);
	while (*++str)
		if (!(*str >= '0' && *str <= '9'))
			return (true);
	return (false);
}

static void	free_r(t_stack **node, char **av, bool one)
{
	ps_freestack(node);
	if (one)
		ps_freematrix(av);
	ps_quiterror();
}

void	ps_init(t_stack **a, char **av, bool one)
{
	long	nbr;
	int		i;

	i = 0;
	while (av[i])
	{
		if (error_s(av[i]))
			free_r(a, av, one);
		nbr = ps_atol(av[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_r(a, av, one);
		ps_stackaddback(a, ps_stackcreate((int)nbr));
		i++;
	}
	if (one)
		ps_freematrix(av);
}
