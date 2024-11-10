/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_freematrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:16:30 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 13:21:57 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ps_freematrix(char **av)
{
	size_t	i;

	if (av == NULL)
		return ;
	i = 0;
	while (av && av[i])
		free(av[i++]);
	if (av)
		free(av);
}
