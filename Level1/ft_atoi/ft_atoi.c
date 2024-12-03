/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:41:33 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/03 22:43:18 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *src)
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
