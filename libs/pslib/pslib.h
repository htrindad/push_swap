/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pslib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:36:10 by htrindad          #+#    #+#             */
/*   Updated: 2024/10/18 18:33:06 by htrindad         ###   ########.fr       */
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
	bool			cheapest;
	struct s_stack	*target;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

size_t	ps_strlen(char const *s);
long	ps_atol(char *nbr);
t_stack	*ps_stackcreate(int val);
t_stack	*ps_stacklast(t_stack *stack);
t_stack	*ps_gethighest(t_stack *node);
t_stack	*ps_getlowest(t_stack *node);
void	ps_stackaddback(t_stack **stack, t_stack *new);
void	ps_quiterror(void);
void	ps_freestack(t_stack **node);
void	ps_setindex(t_stack *stack);
void	ps_freematrix(char **av);
void	*ps_memcpy(void *dst, const void *src, size_t n);
char	**ps_split(char const *s, char c);
char	*ps_substr(char const *s, unsigned int start, size_t len);
char	*ps_strdup(char const *s);
char	*ps_substr(char const *s, unsigned int start, size_t len);
char	*ps_strjoin(char *s1, char const *s2);
bool	ps_sorted(t_stack *node);
int		ps_strncmp(const char *s1, const char *s2, size_t n);
int		ps_countnode(t_stack *stack);
int		ps_highestval(t_stack *node);
void	ps_stackaddfront(t_stack **stack, t_stack *new);
void	ps_set_median(t_stack *a);
void	ps_reset(t_stack *stack);
t_stack	*ps_getcheapest(t_stack *node);
bool	ps_duplicate(t_stack *node);

#endif
