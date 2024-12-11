/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:48:59 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/11 19:02:35 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

void	last_word(char *str)
{
	while (ft_isspace(*str))
		str++;
	while (*str && !ft_isspace(*str))
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
