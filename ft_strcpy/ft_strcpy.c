/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:01:22 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/02 21:09:13 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
/*
# include <stdio.h>

int	main(void)
{
	char	src[20]="hello World";
	char	dest[20];

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
*/
