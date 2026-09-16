/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:15:58 by huneto            #+#    #+#             */
/*   Updated: 2026/09/16 09:29:34 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*res;
	int	i;
	int	len;

	len = max - min;
	if (len < 1)
		return (*range = NULL, 0);
	res = (int *) malloc(len * sizeof(int));
	if (!res)
		return (*range = NULL, 0);
	i = 0;
	while (i < len)
		res[i++] = min++;
	*range = res;
	return (len);
}

// #include <stdio.h>
// int main (void)
// {
// 	int *tab;
// 	int min = 0;
// 	int max = 5;
// 	int len = 0;

// 	len = ft_ultimate_range(&tab, min, max);
// 	int i = 0;
// 	while (i < len)
// 	{
// 		printf("%d\n", tab[i++]);
// 	}
// 	printf ("\t%p\n", tab);
// 	free(tab);
// }