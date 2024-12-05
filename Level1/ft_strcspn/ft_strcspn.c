/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:44:29 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/04 16:32:53 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

static char	ft_tolower(char c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len;
	int		iterator;

	len = 0;
	while (s[len])
	{
		iterator = 0;
		while (reject[iterator])
		{
			if (ft_tolower(s[len]) == ft_tolower(reject[iterator]))
				return (len);
			iterator++;
		}
		len++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%ld", ft_strcspn("HelLo World", "ello orld"));
	return (0);
}
*/
