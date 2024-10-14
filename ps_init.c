/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:09:42 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/14 16:54:36 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	check_error(char *arg)
{
	if (!(*arg == '-' || *arg == '+' || (*arg >= '0' && *arg <= '9')))
		return (true);
	if ((*arg == '-' || *arg == '+') && !(*arg >= '0' && *arg <= '9'))
		return (true);
	while (*++arg)
	{
		if (!(*arg >= '0' && *arg <= '9'))
			return (true);
	}
	return (false);
}

void	ps_init(t_stack **a, char **av)
{
	size_t	i;
	long	nbr;

	i = 0;
	while (av[i])
	{
		nbr = ps_atol(av[i]);
		if (check_error(av[i]) || nbr < INT_MIN || nbr > INT_MAX)
			ending(a, av);
		ps_stackaddback(a, ps_stackcreate((int)nbr));
		i++;
	}
	ps_reset(a);
}
