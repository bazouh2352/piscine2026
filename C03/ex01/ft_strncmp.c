/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 16:55:08 by huneto            #+#    #+#             */
/*   Updated: 2026/09/03 15:56:22 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	if(argc == 4)
// 	{
// 		printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
// 		printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
// 	}
// }