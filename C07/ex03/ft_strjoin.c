/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 17:33:33 by huneto            #+#    #+#             */
/*   Updated: 2026/09/14 22:24:03 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	total_size(char **strs, int size)
{
	int	i;
	int	j;
	int	res;

	res = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			res++;
		}
		i++;
	}
	return (res);
}

char	*ft_strcat(char *dst, char *src)
{
	int	len;
	int	i;

	i = 0;
	len = total_size(&dst, 1);
	while (src[i])
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = 0;
	return (dst);
}

char	*strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		len;

	len = total_size(strs, size) + total_size(&sep, 1) * (size - 1) + 1;
	res = (char *) malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i++]);
		if (i < size)
			ft_strcat(res, sep);
	}
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *prout[] = {"prout", "prourprout", "snifffffff"};
// 	char *sep = "";

// 	char *res = strjoin(3, prout, sep);
// 	// char *prourpourt = "poergfdjhfashf";
// 	// printf("%d", total_size(&prourpourt, 1));
// 	// int i = 0;
// 	// while (res[i])
// 	// {
// 	// }
// 	printf("%s", res);
// 	free(res);
// }