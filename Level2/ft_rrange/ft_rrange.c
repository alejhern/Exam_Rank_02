/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:45:42 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/03 23:11:48 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	size_arr;
	int	start_index;
	int	*range;

	size_arr = 0;
	start_index = start;
	while (start_index++ <= end)
		size_arr++;
	range = (int *)malloc((size_arr) * sizeof(int));
	if (!range)
		return (NULL);
	start_index = 0;
	while (end >= start)
		range[start_index++] = end--;
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	range_iterator;
	int	rest;
	int	start;
	int	end;

	start = 0;
	end = 0;
	range = ft_range(start, end);
	if (!range)
		return (1);
	range_iterator = 0;
	rest = end - start;
	while (range_iterator <= rest)
		printf("%d\n", range[range_iterator++]);
	free(range);
	return (0);
}
*/
