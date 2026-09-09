/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 10:42:56 by huneto            #+#    #+#             */
/*   Updated: 2026/09/09 19:09:01 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int    i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

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

void	swap_str(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

void	ft_sort(char **tab, int size)
{
	int	i;
	int	j;
	int	k;

	if (!tab)
		return ;
	i = size - 1;
	while (i > 1)
	{
		j = 0;
		while (j + 1 <= i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				swap_str(tab[j], tab[j + 1]);
			}
			j++;
		}
		i--;
	}
}


int	main(int argc, char **argv)
{
	int i;

	if (argc > 2)
	{
		ft_sort(&argv[1], argc - 1);
		i = 0;
		while (++i < argc)
		{
			printf("%s\n", argv[i]);
		}
	}
}
