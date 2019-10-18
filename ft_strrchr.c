/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:17:59 by pmaldagu          #+#    #+#             */
/*   Updated: 2019/10/16 16:43:40 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		i--;
	}
	if (c == 0)
		return (&((char *)s)[i]);
	return (0);
}
