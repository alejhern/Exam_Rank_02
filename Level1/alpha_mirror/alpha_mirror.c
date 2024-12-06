/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:16:57 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/06 13:27:46 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static char	get_char(char c)
{
	if (ft_isalpha(c))
	{
		if (c >= 'a' && c <= 'z')
			return ('a' + (25 - (c - 'a')));
		else
			return ('A' + (25 - (c - 'A')));
	}
	return (c);
}

void	alpha_mirror(char *str)
{
	while (*str)
		ft_putchar(get_char(*str++));
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	ft_putchar('\n');
	return (0);
}
