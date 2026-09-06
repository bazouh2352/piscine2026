/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 12:16:50 by huneto            #+#    #+#             */
/*   Updated: 2026/09/04 12:23:14 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	
	if (power < 0)
		return (0);
	res = 1;
	while (power)
	{
		res *= nb;
		power--;
	}
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_power(-10, 3));
// }