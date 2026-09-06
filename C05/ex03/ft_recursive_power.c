/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 12:23:18 by huneto            #+#    #+#             */
/*   Updated: 2026/09/04 12:28:21 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;
	
	if (power < 0)
		return (0);
	if (power)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_recursive_power(5, -1));
// }