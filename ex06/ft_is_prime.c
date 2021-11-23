/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:33:54 by bguyot            #+#    #+#             */
/*   Updated: 2021/11/23 08:52:11 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_sqrt_06(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i < ft_sqrt_06(nb))
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_sqrt_06(int nb)
{
	int	i;

	i = nb % 2;
	while (i * i < nb && i < 46340)
		i += 2;
	return (i);
}
