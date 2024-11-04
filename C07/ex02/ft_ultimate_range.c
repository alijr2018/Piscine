/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:03:56 by abrami            #+#    #+#             */
/*   Updated: 2024/08/13 09:13:21 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < (max - min))
		{
			range[0][i] = min + i;
			i++;
		}
		return (max - min);
	}
}
