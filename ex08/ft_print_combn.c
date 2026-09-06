/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 18:22:04 by huneto            #+#    #+#             */
/*   Updated: 2026/08/30 17:57:56 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	nb = nb % 10;
	nb += '0';
	write(1, &nb, 1);
}

void	add_0format(int n, int size)
{
	if (size < 0)
		return ;
	while (n > 0)
	{
		n /= 10;
		size--;
	}
	while (size)
	{
		write(1, "0", 1);
		size--;
	}
}

int	power10(int n, int power)
{
	while (power)
	{
		n *= 10;
		power--;
	}
	return (n);
}

int	condition(int i, int n)
{
	if (i > 9)
	{
		if (!condition)
			return (0);
	}
	if ()
}

void	ft_print_combn(int n)
{
	int	i;
	int	limit;
	int	printable;
	int	puissancedix;
	int	puissancedixup;

	i = 0;
	limit = power10(1, n);
	while (i < limit)
	{
		printable = 1;
		puissancedix = i;
		puissancedixup = i / 10;
		while (printable && !(puissancedix == 0 && puissancedixup == 0))
		{
			printable = puissancedix > puissancedixup;
			puissancedix = puissancedixup;
			puissancedixup /= 10;
		}
		if (printable)
		{
			write(1, ", ", 2);
			add_0format(i, n);
			ft_putnbr(i);
		}
		i++;
	}
}

int	main(void)
{
	int n = 42;
	add_0format(n, 2);
	ft_putnbr(n);
}
