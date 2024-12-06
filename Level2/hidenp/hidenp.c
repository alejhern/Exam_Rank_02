/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:39:00 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/06 13:39:05 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int nb)
{
	long	nb_long;

	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = -nb_long;
	}
	if (nb_long >= 10)
		ft_putnbr(nb_long / 10);
	ft_putchar(nb_long % 10 + '0');
}

int	hiddenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	return (!*s1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr(hiddenp(argv[1], argv[2]));
	ft_putchar('\n');
	return (0);
}
