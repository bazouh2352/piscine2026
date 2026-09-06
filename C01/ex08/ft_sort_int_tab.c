/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 19:14:39 by huneto            #+#    #+#             */
/*   Updated: 2026/08/31 18:28:27 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	if (!tab)
		return ;
	i = size - 1;
	while (i > 1)
	{
		j = 0;
		while (j + 1 <= i)
		{
			if (tab[j] > tab[j + 1])
			{
				k = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = k;
			}
			j++;
		}
		i--;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	array[] = {6, 2, 1, 4, 3};
// 	int	i;

// 	ft_sort_int_tab(array, 5);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", array[i]);
// 		i++;
// 	}
// }