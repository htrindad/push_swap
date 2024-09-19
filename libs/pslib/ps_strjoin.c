/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:14:32 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/19 19:25:45 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

char	*ps_strjoin(char *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!dest || !src)
		return (NULL);
	str = malloc(ft_strlen(dest) + ft_strlen(src) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (dest[i])
	{
		str[i] = dest[i];
		i++;
	}
	while (src[j] && src[j] != '\n')
		str[i++] = src[j++];
	if (src[j] == '\n')
		str[i++] = '\n';
	str[i] = 0;
	free(dest);
	return (str);
}
