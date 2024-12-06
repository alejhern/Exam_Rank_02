/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 01:08:07 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/06 03:09:18 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

static int	char_to_int(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == ft_tolower(c))
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	result;
	int	current_digit;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		current_digit = char_to_int(*str++, "0123456789abcdef");
		if (current_digit == -1 || current_digit >= str_base)
			break ;
		result = result * str_base + current_digit;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("Cec", 16));
	return (0);
}
*/
