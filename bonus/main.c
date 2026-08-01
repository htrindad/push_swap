/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:26:43 by htrindad          #+#    #+#             */
/*   Updated: 2026/08/01 19:38:58 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"
#include "push_swap_bonus.h"

static inline void	test_move(t_stack **a, t_stack **b, char const *line)
{
	if (ps_strncmp(line, "sa", ps_strlen(line)))
		nv_sa(a);
	if (ps_strncmp(line, "sb", ps_strlen(line)))
		nv_sb(b);
	if (ps_strncmp(line, "ss", ps_strlen(line)))
		nv_ss(a, b);
	if (ps_strncmp(line, "ra", ps_strlen(line)))
		nv_ra(a);
}

static inline void	test_sort(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line != NULL)
	{
		test_move(line);
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || ac == 2 !av[1][0])
		return (-1);
	if (ac == 2)
		av = ps_split(av[1], ' ');
	ps_init(&a, av + 1, ac == 2);
}
