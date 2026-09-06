/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 17:58:31 by huneto            #+#    #+#             */
/*   Updated: 2026/08/29 18:51:15 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int n)
{
	n %= 10;
	n += '0';
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	virgule;

	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if (i < j)
			{
				virgule = j != 1;
				if (virgule)
					write(1, ", ", 2);
				print_digit(i / 10);
				print_digit(i);
				write(1, " ", 1);
				print_digit(j / 10);
				print_digit(j);
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
