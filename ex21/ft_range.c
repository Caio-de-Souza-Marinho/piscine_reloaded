/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:38:14 by caide-so          #+#    #+#             */
/*   Updated: 2024/10/02 19:46:16 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dup;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	dup = (int *)malloc(sizeof(int) * len);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = min + i;
		i++;
	}
	return (dup);
}
