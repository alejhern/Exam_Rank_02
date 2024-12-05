/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:49:25 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/05 19:57:42 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a[1];
	int	b[1];

	*a = 5;
	*b = 7;
	ft_swap(a, b);
	printf("%d, %d", *a, *b);
	return (0);
}
*/
