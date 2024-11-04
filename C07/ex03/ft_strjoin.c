/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:00:17 by abrami            #+#    #+#             */
/*   Updated: 2024/08/13 09:17:21 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	r = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			r[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			r[k++] = sep[j++];
		i++;
	}
	r[k] = '\0';
	return (r);
}
