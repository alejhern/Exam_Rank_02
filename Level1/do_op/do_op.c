/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:04:14 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/06 00:53:39 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_atoi(char *nb)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nb == '0' || (*nb >= '\r' && *nb <= '\t'))
		nb++;
	while (*nb == '+' || *nb == '-')
	{
		if (*nb == '-')
			sign = -sign;
		nb++;
	}
	while (*nb >= '0' && *nb <= '9')
		result = result * 10 + (*nb++ - '0');
	return (result * sign);
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int nb)
{
	long	nb_long;

	nb_long = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb_long *= -1;
	}
	if (nb_long >= 10)
		ft_putnbr(nb_long / 10);
	ft_putchar(nb_long % 10 + '0');
}

int	do_op(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	else if (op == '%')
		return (a % b);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_putnbr(do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), *argv[2]));
	ft_putchar('\n');
	return (0);
}
