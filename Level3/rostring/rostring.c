/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:02:08 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/11 19:19:30 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

void rostring(char *str)
{
	char	*start_f_word;
	char	*end_f_word;

	while (*str && ft_isspace(*str))
		str++;
	start_f_word = str;
	while (*str && !ft_isspace(*str))
		str++;
	end_f_word = str;
	while (*str && ft_isspace(*str))
		str++;
	while (*str)
	{
		while (*str && !ft_isspace(*str))
			ft_putchar(*str++);
		while (ft_isspace(*str))
			str++;
		ft_putchar(' ');		
	}
	while (start_f_word < end_f_word)
		ft_putchar(*start_f_word++);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
