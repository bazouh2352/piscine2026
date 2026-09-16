/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:44:44 by huneto            #+#    #+#             */
/*   Updated: 2026/09/16 11:58:03 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);
int	base_checker(char *base);

long	own_abs(long nbr)
{
	return (nbr * (1 - 2 * (nbr < 0)));
}

int	len_needed(int deci_nbr, char *base_to)
{
	int		i;
	int		base_len;
	long	suuuuiiii;

	suuuuiiii = own_abs(deci_nbr);
	base_len = ft_strlen(base_to);
	i = 1;
	while (suuuuiiii >= base_len)
	{
		suuuuiiii /= base_len;
		i++;
	}
	return (i);
}

void	ft_itoa_base(long nbr, char *base_to, char *res, int i_left)
{
	int		base_len;

	base_len = ft_strlen(base_to);
	if (nbr < 0)
	{
		res[0] = '-';
		return (ft_itoa_base(-nbr, base_to, &*(++res), --i_left));
	}
	if (nbr >= base_len)
		ft_itoa_base(nbr / base_len, base_to, res, i_left - 1);
	nbr %= base_len;
	res[i_left] = base_to[nbr];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	deci_nbr;
	int		len;
	char	*res;

	if (!base_checker(base_from) || !base_checker(base_to))
		return (NULL);
	if (!nbr)
		return (NULL);
	deci_nbr = ft_atoi_base(nbr, base_from);
	len = (deci_nbr < 0);
	len += len_needed(deci_nbr, base_to);
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_itoa_base(deci_nbr, base_to, res, len - 1);
	res[len] = '\0';
	return (res);
}

// #include <stdio.h>
// #include <limits.h>
// int main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		char *ptr;
// 		ptr = ft_convert_base(NULL, "0123456789", "0123456789abcdef");
// 		printf("%s", ptr);
// 		free(ptr);
// 	}
// }