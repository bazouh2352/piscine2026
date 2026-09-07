/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:44:31 by huneto            #+#    #+#             */
/*   Updated: 2026/09/07 19:05:42 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!str[0] && !to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("%s\n", strstr(argv[1], argv[2]));
// 		printf("%s\n", ft_strstr(argv[1], argv[2]));
// 	}
// }