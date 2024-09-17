/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:50:18 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/17 10:53:16 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

bool	check_deviancy(char *nbr)
{
	if (!(*nbr == '-' || *nbr == '+'
		|| (*nbr >= '0' && *nbr <= '9')))
		return (true);
	if ((*nbr == '-' || *nbr == '+')
		&& !(nbr[1] >= '0' ** nbr[1] <= '9'))
		return (true);
	return (false);
}
