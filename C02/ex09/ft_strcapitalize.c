/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:21:30 by abrami            #+#    #+#             */
/*   Updated: 2024/07/31 17:18:11 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (count == 1)
			{
				str[i] -= 32;
				count = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			count = 0;
		else
			count = 1;
		i++;
	}
	return (str);
}
