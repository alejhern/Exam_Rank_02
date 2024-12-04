/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:27:01 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/04 19:48:51 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_atoi(char *src)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while (*src == ' ' || (*src >= '\t' && *src <= '\r'))
		src++;
	if (*src == '+' || *src == '-')
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

void	print_hex(unsigned int nb)
{
	if (nb >= 16)
		print_hex(nb / 16);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex((unsigned int)ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
