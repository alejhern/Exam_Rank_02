/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:32:07 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/02 23:04:46 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

static void	ft_printnbr(int nbr)
{
	char	c;

	while (nbr >= 10)
	{
		nbr /= 10;
		ft_printnbr(nbr);
	}
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

static int	ft_atoi(char *src)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while (*src == ' ' || (*src >= '\t' && *src <= '\r'))
		src++;
	while (*src == '+' || *src == '-')
	{
		if (*src == '-')
			sign *= -1;
		src++;
	}
	while (ft_isdigit(*src))
	{
		nb = nb * 10 + (*src - '0');
		src++;
	}
	return (nb * sign);
}

int	pgcd(int a, int b)
{
	int	residuo;

	if (a < 1 || b < 1)
		return (0);
	residuo = a % b;
	while (residuo)
	{
		a = residuo;
		residuo = b % residuo;
		b = a;
	}
	return (b);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_printnbr(pgcd(ft_atoi(argv[1]), ft_atoi(argv[2])));
	write(1, "\n", 1);
	return (0);
}
