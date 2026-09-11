/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:06:49 by huneto            #+#    #+#             */
/*   Updated: 2026/09/10 18:41:44 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*res;
	int	i;

	res = (char *) malloc((ft_strlen(str) + 1) * sizeof(char));
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*str = "prout";
// 	char	*cpy;

// 	printf("%p\t, %s\n", str, str);
// 	cpy = ft_strdup(str);
// 	printf("%p\t, %s\n", cpy, cpy);
// 	printf("proutprout :)");
// }
