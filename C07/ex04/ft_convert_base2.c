/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 18:46:24 by huneto            #+#    #+#             */
/*   Updated: 2026/09/14 22:24:59 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ');
}

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
		if (base[i] == '-' || base[i] == '+' || ft_isspace(base[i]))
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

int	base_pos(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;
	int	res;
	int	base_len;

	base_len = ft_strlen(base);
	signe = 1;
	res = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
		signe *= 1 - 2 * (str[i++] == '-');
	while (base_pos(str[i], base) != -1)
	{
		res *= base_len;
		res += base_pos(str[i], base);
		i++;
	}
	return (res * signe);
}
