/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:09:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/11 16:01:51 by htrindad         ###   ########.fr       */
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

static bool	rep(t_stack *a, int val)
{
	if (a == NULL)
		return (false);
	while (a)
	{
		if (a->val == val)
			return (true);
		a = a->next;
	}
	return (false);
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
		if (nbr > INT_MAX || nbr < INT_MIN || ps_nlen(av[i]) > 10)
			free_r(a, av, one);
		if (rep(*a, (int)nbr))
			free_r(a, av, one);
		ps_stackaddback(a, ps_stackcreate((int)nbr));
		i++;
	}
	if (one)
		ps_freematrix(av);
}
