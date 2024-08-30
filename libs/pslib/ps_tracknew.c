/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tracknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:15:31 by htrindad          #+#    #+#             */
/*   Updated: 2024/08/30 19:29:46 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_track	*ps_tracknew(long content)
{
	t_track	*new;

	new = malloc(sizeof(t_track));
	new->val = content;
	return (new);
}
