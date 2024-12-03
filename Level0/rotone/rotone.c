/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:23:14 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/03 22:39:11 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

static int	ft_is_z(char c)
{
	return (c == 'z' || c == 'Z');
}

void	rotone(char *src)
{
	while (*src)
	{
		if (ft_isalpha(*src))
		{
			if (ft_is_z(*src))
				ft_putchar(*src - 25);
			else
				ft_putchar(*src + 1);
		}
		else
			ft_putchar(*src);
		src++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
