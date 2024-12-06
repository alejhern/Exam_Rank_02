/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 23:41:13 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/06 03:07:00 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_puchar(char c)
{
	write(1, &c, 1);
}

static int	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static int	get_alpha_pos(char c)
{
	int	pos;

	if (!ft_isalpha(c))
		return (1);
	pos = 0;
	while (pos <= 25)
	{
		if ((c == 'A' + pos) || (c == 'a' + pos))
			return (pos + 1);
		pos++;
	}
	return (pos + 1);
}

void	repeat_alpha(char *str)
{
	int	print_repeat;

	while (*str)
	{
		print_repeat = get_alpha_pos(*str);
		while (print_repeat--)
			ft_puchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_puchar('\n');
	return (0);
}
