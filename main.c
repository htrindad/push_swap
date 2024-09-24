/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:56:29 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/24 18:14:55 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	checkmax(char const *str)
{
	size_t	i;
	long	token;

	token = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '	')
		{
			token++;
			while (str[i] == ' ' || str[i] == '	')
				i++;
			i--;
		}
		i++;
	}
	if (token > INT_MAX)
		ending();
}

static int	get_highest(t_stack *a)
{
	int	highest;

	highest = a->val;
	while (a)
	{
		if (a->val > highest)
			highest = a->val;
		a = a->next;
	}
	return (highest);
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
	int		highest;

	a = NULL;
	b = NULL;
	if (ac == 1 || (!av[1][0]))
		return (-1);
	if (ac == 2)
		args = ps_split(av[1], ' ');
	else
		args = cut(av + 1);
	ps_init(&a, args);
	count = ps_countnode(a);
	highest = get_highest(a);
	if (count < 6)
		small_sort(&a, highest);
	return (final(&a, args));
}
