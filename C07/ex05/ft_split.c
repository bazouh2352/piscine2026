/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 20:15:46 by huneto            #+#    #+#             */
/*   Updated: 2026/09/16 12:18:22 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	freeall(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

int	issep(char c, const char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_substr(char *str, char *sep)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (!issep(str[i], sep))
		{
			i++;
			res++;
			while (!issep(str[i], sep) && str[i])
				i++;
		}
		else
			i++;
	}
	return (res);
}

char	*alloc_substr(char *str, int *global_pos, char *sep)
{
	char	*res;
	int		i;

	while (issep(str[*global_pos], sep))
	{
		*global_pos += 1;
	}
	i = *global_pos;
	while (!issep(str[i], sep) && str[i])
	{
		i++;
	}
	res = (char *) malloc(((i - *global_pos) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (!issep(str[*global_pos], sep) && str[*global_pos])
	{
		res[i] = str[*global_pos];
		i++;
		(*global_pos)++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *sep)
{
	char	**res;
	int		global_pos;
	int		len;
	int		i;

	len = count_substr(str, sep);
	res = (char **) malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	global_pos = 0;
	while (i < len)
	{
		res[i] = alloc_substr(str, &global_pos, sep);
		if (!res)
			return (NULL);
		i++;
	}
	res[i] = NULL;
	return (res);
}

#include <stdio.h>
int main(void)
{
	char **res = ft_split(NULL, NULL);
	int i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	freeall(res);
	// printf("%d", count_substr("bonjour", ""));
}
