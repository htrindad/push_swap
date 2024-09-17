/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pslib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:32:42 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/17 11:10:34 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSLIB_H
# define PSLIB_H

# include <stdlib.h>
# include <stdbool.h>
# include <string.h>

typedef struct s_stack
{
	int				val;
	int				pos;
	bool			above_median;
	bool			cheapest;
	struct s_stack	*target;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

char	**ps_split(char *str, char sep);
long	ps_atol(char *num);
void	*ps_stacknew(int val);
size_t	ps_strlen(char const *s);
char	*ps_substr(char const *s);
char	*ps_substr(char const *s, unsigned int start, unsigned int end);
char	*ps_strdup(char const *s);
size_t	ps_strlen(char const *s);
char	*ps_substr(char const *s, unsigned int start, unsigned int len);
int		ps_stacklen(t_stack *stack);

#endif
