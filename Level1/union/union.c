/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:14:00 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/11 18:59:32 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

static int	isduplicate(char *str, char c, int pos)
{
	int	index;

	index = 0;
	while (str[index] && index < pos)
	{
		if (str[index] == c)
			return (1);
		index++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	index_s1;
	int	index_s2;

	index_s1 = 0;
	while (s1[index_s1])
	{
		if (!isduplicate(s1, s1[index_s1], index_s1))
			ft_putchar(s1[index_s1]);
		index_s1++;
	}
	index_s2 = 0;
	while (s2[index_s2])
	{
		if (!isduplicate(s1, s2[index_s2], index_s1) && !isduplicate(s2,
				s2[index_s2], index_s2))
			ft_putchar(s2[index_s2]);
		index_s2++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
