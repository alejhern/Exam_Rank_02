/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:02:09 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/03 00:41:28 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	roasting(char *src)
{
	char	*pos_f_word;
	char	*end_word;

	while (*src == ' ' || (*src >= '\t' && *src <= '\r'))
		src++;
	pos_f_word = src;
	while (*src && (*src != ' ' || (*src <= '\t' && *src >= '\r')))
		src++;
	end_word = src;
	while (*src && (*src == ' ' || (*src >= '\t' && *src <= '\r')))
		src++;
	while (*src)
	{
		while (*src && *src != ' ' && (*src < '\t' || *src > '\r'))
			ft_putchar(*src++);
		while (*src == ' ' || (*src >= '\t' && *src <= '\r'))
			src++;
		ft_putchar(' ');
	}
	while (pos_f_word < end_word)
		ft_putchar(*pos_f_word++);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		roasting(argv[1]);
	ft_putchar('\n');
	return (0);
}
