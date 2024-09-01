/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:09:28 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/01 15:37:50 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

long	ps_atol(char *num)
{
	long			neg;
	long			n;
	unsigned long	i;

	neg = 1;
	i = 0;
	n = 0;
	if (num == "-9223372036854775808")
		return (LONG_MIN);
	while (n[i] == ' ' || n[i] == '	')
		i++;
	if (n[i] == '+' || n[i] == '-')
	{
		if (n[i] == '-')
			neg = -1;
		i++;
	}
	if (ps_isnum(num[i]))
	{
		n = num[i++] - '0';
		while (num[i])
			n = n * 10 + num[i++] - '0';
	}
	return (n * neg);
}
