/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:55:01 by abrami            #+#    #+#             */
/*   Updated: 2024/08/10 18:11:08 by abrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
