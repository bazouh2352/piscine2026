/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 12:05:13 by huneto            #+#    #+#             */
/*   Updated: 2026/09/04 12:12:13 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int	res;

	if (n < 0)
		return (0);
	res = 1;
	while (n)
	{
		res *= n;
		n--;
	}
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// 	printf("%d\n", ft_iterative_factorial(-5));
// }