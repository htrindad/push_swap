/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:31:03 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 12:28:52 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	qic(char **args)
{
	if (args == NULL)
		ps_quiterror();
}

static char	**cut(char **arg)
{
	char	*tmp;
	char	**comp;
	size_t	i;

	i = 0;
	tmp = ps_strdup(arg[i++]);
	while (arg[i])
	{
		tmp = ps_strjoin(tmp, " ");
		tmp = ps_strjoin(tmp, arg[i++]);
	}
	comp = ps_split(tmp, ' ');
	free(tmp);
	return (comp);
}

static int	final(t_stack **a, char **args)
{
	normal_ending(a, args);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int		count;

	a = NULL;
	b = NULL;
	if (ac == 1 || cem(ac, av))
		return (-1);
	if (ac == 2)
		args = ps_split(av[1], ' ');
	else
		args = cut(av + 1);
	qic(args);
	ps_init(&a, args);
	count = ps_countnode(a);
	if (ps_duplicate(a))
		ending(&a, args);
	if (count == 3)
		small_sort(&a, ps_highestval(a));
	else if (count < 6)
		subsmall_sort(&a, &b);
	else
		turk(&a, &b);
	return (final(&a, args));
}
