/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:51:15 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/06 03:03:29 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_printnbr(int nb)
{
	long	nb_long;

	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = -nb_long;
	}
	if (nb_long >= 10)
		ft_printnbr(nb_long / 10);
	ft_putchar(nb_long % 10 + '0');
}

int	main(int argc, char **argv)
{
	ft_printnbr(argc - 1);
	ft_putchar('\n');
	*argv = NULL;
	return (0);
}
