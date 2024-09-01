/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tracknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:15:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/01 16:34:48 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

t_track	*ps_tracknew(long content)
{
	t_track	*new;

	new = malloc(sizeof(t_track));
	if (new == NULL)
		return ;
	new->val = content;
	return (new);
}
