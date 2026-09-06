/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 16:48:59 by huneto            #+#    #+#             */
/*   Updated: 2026/09/06 18:26:18 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_size;

	i = 0;
	dst_size = ft_strlen(dst);
	while (src[i] && i + 1 > size)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = src[i];
	return (dst_size + ft_strlen(src));
}

// #include <bsd/string.h>
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char dst[20] = "Hello";
// 	char *src = ", Nice World!";
// 	// printf("%lu\n", strlcat(dst, src, 20));
// 	printf("%u\n", ft_strlcat(dst, src, 20));
// 	int i = 0;
// 	while (i < 20)
// 	{
// 		printf("%d ", dst[i]);
// 		i++;
// 	}
// }