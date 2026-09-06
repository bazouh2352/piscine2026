/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 23:11:29 by huneto            #+#    #+#             */
/*   Updated: 2026/08/30 17:39:43 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int n)
{
	n %= 10;
	n += '0';
	write(1, &n, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	unites;
	int	dizaines;
	int	centaines;

	write(1, "012", 3);
	i = 13;
	while (i < 999)
	{
		unites = i % 10;
		dizaines = (i / 10) % 10;
		centaines = (i / 100) % 10;
		if (centaines < dizaines)
		{
			if (dizaines < unites)
			{
				write(1, ", ", 2);
				print_digit(centaines);
				print_digit(dizaines);
				print_digit(unites);
			}
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }
