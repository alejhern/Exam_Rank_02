/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:10:37 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/02 21:29:07 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	snake_to_camel(char *src)
{
	int	is_snake;

	is_snake = 0;
	while (*src)
	{
		if (*src != '_')
		{
			if (is_snake)
				ft_putchar(*src - 32);
			else
				ft_putchar(*src);
			is_snake = 0;
		}
		else
			is_snake = 1;
		src++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	ft_putchar('\n');
	return (0);
}
