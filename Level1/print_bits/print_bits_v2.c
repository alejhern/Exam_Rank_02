/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:04:55 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/06 14:05:03 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned int nb)
{
	if (nb >= 2)
		print_bits(nb / 2);
	ft_putchar("01"[nb % 2]);
}
/*
int	main(void)
{
	print_bits(42);
	return (0);
}
*/