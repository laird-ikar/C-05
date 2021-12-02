/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 07:44:56 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/02 13:16:56 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime_07(int nb);
int	ft_is_prime(int nb);
int	ft_sqrt_07(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!ft_is_prime_07(nb))
		nb++;
	return (nb);
}

int	ft_is_prime_07(int nb)
{
	int	i;
	int	sqrt_nb;

	if (nb < 2)
		return (0);
	i = 2;
	sqrt_nb = ft_sqrt_06(nb);
	while (i < sqrt_nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_sqrt_07(int nb)
{
	int	i;

	i = nb % 2;
	while (i * i < nb && i < 46340)
		i += 2;
	return (i);
}
