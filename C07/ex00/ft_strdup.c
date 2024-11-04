/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:58:59 by abrami            #+#    #+#             */
/*   Updated: 2024/08/12 14:47:06 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (ptr == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
