/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:22:00 by abrami            #+#    #+#             */
/*   Updated: 2024/08/08 10:25:59 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}
