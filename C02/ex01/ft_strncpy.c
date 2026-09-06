/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 16:27:52 by huneto            #+#    #+#             */
/*   Updated: 2026/09/03 14:56:17 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[] = "ploufploufplouf";
// 	char	*src = "prout";

// 	printf("%s\n", dest);
// 	ft_strncpy(dest, src, 5);
// 	printf("%s\n", dest);
// }