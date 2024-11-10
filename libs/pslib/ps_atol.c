/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:09:28 by htrindad          #+#    #+#             */
/*   Updated: 2024/11/10 13:15:15 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

static bool	ps_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

long	ps_atol(char *num)
{
	long			neg;
	long			n;
	size_t			i;

	neg = 1;
	i = 0;
	n = 0;
	while (num[i] == ' ' || num[i] == '\t' \
		|| num[i] == '\n' || num[i] == '\r' \
		|| num[i] == '\v' || num[i] == '\f')
		i++;
	if (num[i] == '+' || num[i] == '-')
	{
		if (num[i] == '-')
			neg = -1;
		i++;
	}
	if (ps_isdigit(num[i]))
	{
		n = num[i++] - '0';
		while (ps_isdigit(num[i]))
			n = n * 10 + num[i++] - '0';
	}
	return (n * neg);
}
