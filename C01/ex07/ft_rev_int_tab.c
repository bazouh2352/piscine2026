/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 18:56:08 by huneto            #+#    #+#             */
/*   Updated: 2026/08/31 18:28:05 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	if (!tab)
		return ;
	i = 0;
	j = size - 1;
	while (i < j)
	{
		k = tab[j];
		tab[j] = tab[i];
		tab[i] = k;
		i++;
		j--;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	array[] = {1, 2, 3, 4, 5};
// 	int	i;

// 	ft_rev_int_tab(NULL, 5);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", array[i]);
// 		i++;
// 	}
// }