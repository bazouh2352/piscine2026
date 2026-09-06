/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 10:58:38 by huneto            #+#    #+#             */
/*   Updated: 2026/09/02 11:42:22 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (is_lowercase(str[i]))
		{
			str[i] += ('A' - 'a');
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "proutProut2352 \nproutProut";
// 	printf("%s\n", ft_strupcase(str));
// }