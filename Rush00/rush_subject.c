/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_subject.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huneto <huneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 15:04:08 by huneto            #+#    #+#             */
/*   Updated: 2026/08/29 16:18:51 by huneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	subject;

	subject = "lgouhier"[0];
	subject -= 'a';
	subject %= 5;
	subject += '0';
	write(1, &subject, 1);
}
