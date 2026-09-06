/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 11:20:28 by huneto            #+#    #+#             */
/*   Updated: 2026/09/02 11:38:57 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_alphanum(str[i]))
		{
			if (is_lowercase(str[i]))
				str[i] += ('A' - 'a');
			while (is_alphanum(str[++i]))
			{
				if (is_uppercase(str[i]))
					str[i] += ('a' - 'A');
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "prOUtPROUT42prout prout_prout";
// 	printf("%s\n", ft_strcapitalize(str));
// }