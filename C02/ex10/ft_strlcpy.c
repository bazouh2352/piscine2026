/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:00:14 by huneto            #+#    #+#             */
/*   Updated: 2026/09/02 16:28:05 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// }

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[] = "ploufploufplouf";
	char	*src = "proutproutprout";

	printf("%d", strlcpy(dest, src, 5));
}