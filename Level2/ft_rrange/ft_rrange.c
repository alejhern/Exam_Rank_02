/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:45:42 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/06 01:00:13 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	size_arr;
	int	index;
	int	*range;

	size_arr = 0;
	if (start > end)
		size_arr = start - end + 1;
	else
		size_arr = end - start + 1;
	range = (int *)malloc((size_arr) * sizeof(int));
	if (!range)
		return (NULL);
	index = 0;
	if (start > end)
	{
		while (start >= end)
			range[index++] = end++;
	}
	else
	{
		while (start <= end)
			range[index++] = end--;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	range_iterator;
	int	size_arr;
	int	start;
	int	end;

	start = -1;
	end = -5;
	range = ft_rrange(start, end);
	if (!range)
		return (1);
	range_iterator = 0;
	if (start <= end)
		size_arr = end - start + 1;
	else
		size_arr = start - end + 1;
	while (range_iterator < size_arr)
		printf("%d\n", range[range_iterator++]);
	free(range);
	return (0);
}
*/
