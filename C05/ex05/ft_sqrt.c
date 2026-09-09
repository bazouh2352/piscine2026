/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:27:10 by huneto            #+#    #+#             */
/*   Updated: 2026/09/07 15:40:19 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int n)
{
	int	i;

	if (n <= 0)
		return (0);
	i = 0;
	while (i * i < n)
	{
		i++;
	}
	return (i * (i * i == n));
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d", ft_sqrt(atoi(argv[1])));
// }