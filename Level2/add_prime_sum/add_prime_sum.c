/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:12:45 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/05 23:00:40 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int      ft_isdigit(char c)
{
        return (c >= '0' && c <= '9');
}

int     ft_atoi(char *src)
{
        int     sign;
        int     nb;

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

int	ft_prev_prime(int nb)
{
	int	x;

	if (nb <= 2)
		return (1);
	x = 2;
	nb --;
	while (nb % x)
		x++;
	if (x != nb)
		x = ft_prev_prime(nb);
	return (x);
}

int	main(int argc, char **argv)
{
	int	prev_prime;
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		sum = ft_atoi(argv[1]);
		prev_prime = ft_prev_prime(sum);
		while (prev_prime > 1)
		{
			sum += prev_prime;
			prev_prime = ft_prev_prime(prev_prime);
		}
	}
	printf("%d\n", sum);
	return (0);
}
