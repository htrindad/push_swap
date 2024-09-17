/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:06:12 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/17 11:08:46 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack *current;

	if (stack == NULL)
		return ;
	current = *stack;
	while (current)
	{
		tmp = *stack->next;
		free(current);
		current = tmp;
	}
}

static void	print_error()
{
	write(1, "Error\n", 6);
	exit(0);
}

void	ps_init(t_stack **a, char **av)
{
	long	nbr;
	int		i;

	i = 0;
	while (av[i])
	{
		if (check_deviancy(av[i]))
		{
			free_stack(a);
			break;
		}
		else
		{
			nbr = ps_atol(av[i]);
			if (nbr < INT_MIN || nbr > INT_MAX)
			{
				free_stack(a);
				print_error();
			}

		}
		i++;
	}
}
