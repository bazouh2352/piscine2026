/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 15:19:36 by huneto            #+#    #+#             */
/*   Updated: 2026/08/29 17:41:20 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	v_edge(int length)
{
	ft_putchar('A');
	length--;
	while (length - 1 > 0)
	{
		ft_putchar('B');
		length--;
	}
	if (length)
		ft_putchar('C');
	ft_putchar('\n');
}

void	h_edge(int length)
{
	ft_putchar('B');
	length--;
	while (length - 1 > 0)
	{
		ft_putchar(' ');
		length--;
	}
	if (length)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		v_edge(x);
		y--;
		while (y - 1 > 0)
		{
			h_edge(x);
			y--;
		}
		if (y)
			v_edge(x);
	}
	else
		write(1, "Les valeurs remplies ne sont pas correctes.\n", 44);
}
