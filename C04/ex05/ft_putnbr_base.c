/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 18:54:37 by huneto            #+#    #+#             */
/*   Updated: 2026/09/06 20:56:50 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	base_checker(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!base_checker(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	nbr %= base_len;
	write(1, &base[nbr], 1);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
		ft_putnbr_base(-42, "");
}