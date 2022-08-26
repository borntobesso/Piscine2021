/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:17:49 by sojung            #+#    #+#             */
/*   Updated: 2021/11/04 11:50:32 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb > 1)
	{
		while (n <= 46340 && n * n <= nb)
		{
			if (nb % n == 0)
				return (0);
			n++;
		}
		return (1);
	}
	else
		return (0);
}