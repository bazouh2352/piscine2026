/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:42:44 by huneto            #+#    #+#             */
/*   Updated: 2026/09/11 11:25:54 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;
	int	len;

	len = max - min;
	res = malloc((len > 0) * len * sizeof(int));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
		res[i++] = min++;
	return (res);
}

#include <stdio.h>
int main (void)
{
	int *tab;
	int min = -5;
	int max = 4;

	tab = ft_range(min, max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d\n", tab[i++]);
	}
	printf ("%p\n", tab);
	free(tab);
}