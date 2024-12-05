/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:59:11 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/05 20:45:38 by amhernandez      ###   ########.fr       */
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

static char	*ft_strrchr(char *str, char delimitter)
{
	str += ft_strlen(str) - 1;
	while (*str)
	{
		if (*str == delimitter)
			return ((char *)str);
		str--;
	}
	if (*str == delimitter)
		return ((char *)str);
	return (NULL);
}

void	last_word(char *str)
{
	char	*last_word;

	last_word = ft_strrchr(str, ' ');
	while (*(last_word + 1) == '\0' || *(last_word + 1) == ' ')
	{
		*last_word = '\0';
		last_word = ft_strrchr(str, ' ');
	}
	last_word++;
	while (*last_word)
		ft_putchar(*last_word++);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
