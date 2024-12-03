/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 23:17:45 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/04 00:09:50 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static char	*ft_strrchr(char *str, char limmiter)
{
	str += ft_strlen(str) - 1;
	while (*str)
	{
		if (*str == limmiter)
			return ((char *)str);
		str--;
	}
	if (*str == limmiter)
		return ((char *)str);
	return (NULL);
}

void	rev_wstr(char *str)
{
	char	*start;
	char	*aux;

	start = ft_strrchr(str, ' ');
	while (start)
	{
		aux = start + 1;
		while (*aux)
			ft_putchar(*aux++);
		ft_putchar(' ');
		*start = '\0';
		start = ft_strrchr(str, ' ');
	}
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
