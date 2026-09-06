/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 19:05:00 by huneto            #+#    #+#             */
/*   Updated: 2026/09/02 11:40:38 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[] = "ploufi";
// 	char *src = "prout";

// 	printf("dest : %s\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("dest : %s\n", dest);
// }