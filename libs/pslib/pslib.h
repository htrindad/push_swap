/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pslib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:36:10 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/19 18:56:05 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSLIB_H
# define PSLIB_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	int				val;
	int				index;
	int				push_cost;
	bool			am;
	struct s_stack	*target;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

size_t	ps_strlen(char const *s);
long	ps_atol(char *nbr);
char	*ps_strdup(char const *s);
char	*ps_substr(char const *s, unsigned int start, size_t len);
char	**ps_split(char const *s, char c);
t_stack	*ps_stackcreate(int val);
t_stack	*ps_stacklast(t_stack *stack);
void	ps_stackaddback(t_stack **stack, t_stack *new);
int		ps_strncmp(const char *s1, const char *s2, size_t n);
void	ps_quiterror(void);
void	ps_freestack(t_stack **node);
void	ps_setindex(t_stack *stack);
int		ps_countnode(t_stack *stack);
int		ps_gethighest(t_stack *node);
void	ps_freematrix(char **av);


#endif
