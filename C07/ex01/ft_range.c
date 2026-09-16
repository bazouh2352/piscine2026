/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:42:44 by huneto            #+#    #+#             */
/*   Updated: 2026/09/16 09:25:49 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;
	int	len;

	len = max - min;
	if (len < 1)
		return (NULL);
	res = malloc(len * sizeof(int));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
		res[i++] = min++;
	return (res);
}

// #include <stdio.h>
// #include <limits.h>
// int main (void)
// {
// 	int *tab;
// 	int min = INT_MIN;
// 	int max = INT_MAX;

// 	tab = ft_range(min, max);
// 	int i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d\n", tab[i++]);
// 	}
// 	printf ("%p\n", tab);
// 	free(tab);
// }