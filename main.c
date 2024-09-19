/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:56:29 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/19 19:31:38 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**cut(char **arg)
{
	int		i;
	char	*temp;
	char	*temp;
	char	**res;

	i = 0;
	temp = malloc(2);
	while (arg[i])
	{
		temp2 = ps_strjoin(temp, arg[i]);
		free(temp);
		temp = ps_strjoin(temp2, " ");
		free(temp2);
		i++;
	}
	res = ps_split(temp, ' ');
	free(temp);
	return (res);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int		count;

	a = NULL;
	b = NULL;
	if (ac == 1 || (!av[1][0]))
		return (-1);
	if (ac == 2)
		args = ps_split(av[1], ' ');
	else
		args = cut(av);
	ps_init(&a, av + 1);
	count = ps_countnode(a);
	if (count == 3)
		small_sort(&a);
	return (0);
}
