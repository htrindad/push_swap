/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:55:02 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/05 15:03:12 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

bool	ps_isdigit(char *nbr)
{
	while (*nbr)
	{
		if (*nbr != '-' && *nbr != '+'
			&& !(*nbr >= '0' && *nbr <= '9'))
			return (true);
		nbr++;
	}
	return (false);
}
