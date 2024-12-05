/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:55:27 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/04 14:05:04 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

void	ulstr(char *src)
{
	while (*src)
	{
		if (ft_islower(*src))
			ft_putchar(*src++ - 32);
		else if (ft_isupper(*src))
			ft_putchar(*src++ + 32);
		else
			ft_putchar(*src++);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
