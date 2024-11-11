/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:39:53 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/11 15:14:15 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

static int	tcount(char const *str, char sep)
{
	int		count;
	bool	hap;

	count = 0;
	while (*str)
	{
		hap = false;
		while (*str == sep && *str)
			str++;
		while (*str != sep && *str)
		{
			if (!hap)
			{
				count++;
				hap = true;
			}
			str++;
		}
	}
	return (count);
}

static char	*get_next_word(char const *str, char sep)
{
	static int	cur = 0;
	char		*n_str;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[cur] == sep)
		cur++;
	while ((str[cur + len] != sep) && str[cur + len])
		len++;
	n_str = malloc(len + 1);
	if (n_str == NULL)
		return (NULL);
	while ((str[cur] != sep) && str[cur])
		n_str[i++] = str[cur++];
	n_str[i] = 0;
	return (n_str);
}

char	**ps_split(char const *s, char c)
{
	int		token;
	char	**matrix;
	int		i;

	i = 0;
	token = tcount(s, c);
	if (!token)
		exit(-1);
	matrix = malloc(sizeof(char *) * (token + 2));
	if (matrix == NULL)
		return (NULL);
	while (token -- >= 0)
	{
		if (!i)
		{
			matrix[i] = malloc(1);
			if (matrix == NULL)
				return (NULL);
			matrix[i++][0] = 0;
			continue ;
		}
		matrix[i++] = get_next_word(s, c);
	}
	matrix[i] = NULL;
	return (matrix);
}
