/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:33:01 by pmaldagu          #+#    #+#             */
/*   Updated: 2019/10/16 14:40:24 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	if (b == 0)
		return (0);
	else
	{
		while (i < len)
		{
			((char *)b)[i] = c;
			i++;
		}
		return (b);
	}
}
