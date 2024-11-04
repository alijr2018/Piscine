/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:59:24 by abrami            #+#    #+#             */
/*   Updated: 2024/08/12 18:03:27 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		ptr[i] = min++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
