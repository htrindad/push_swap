/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:26:43 by htrindad          #+#    #+#             */
/*   Updated: 2026/08/01 20:33:40 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	test_move(t_stack **a, t_stack **b, char const *line)
{
	if (ps_strncmp(line, "sa", ps_strlen(line)))
		nv_sa(a);
	else if (ps_strncmp(line, "sb", ps_strlen(line)))
		nv_sb(b);
	else if (ps_strncmp(line, "ss", ps_strlen(line)))
		nv_ss(a, b);
	else if (ps_strncmp(line, "ra", ps_strlen(line)))
		nv_ra(a);
	else if (ps_strncmp(line, "rb", ps_strlen(line)))
		nv_rb(b);
	else if (ps_strncmp(line, "rr", ps_strlen(line)))
		nv_rr(a, b);
	else if (ps_strncmp(line, "rra", ps_strlen(line)))
		nv_rra(a);
	else if (ps_strncmp(line, "rrb", ps_strlen(line)))
		nv_rrb(b);
	else if (ps_strncmp(line, "rrr", ps_strlen(line)))
		nv_rrr(a, b);
	else if (ps_strncmp(line, "pa", ps_strlen(line)))
		nv_pa(b, a);
	else if (ps_strncmp(line, "pb", ps_strlen(line)))
		nv_pb(a, b);
	else
		free_all(a, b);
}

static inline void	test_sort(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line != NULL)
	{
		test_move(a, b, line);
		free(line);
		line = get_next_line(0);
	}
	if (ps_sorted(*a) && !ps_countnode(*b))
		write(1, "OK!\n", 4);
	else
		write(1, "KO!\n", 4);;
}

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
	test_sort(&a, &b);
}
