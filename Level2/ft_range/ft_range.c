/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhernandez <alejhern@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:55:00 by amhernandez       #+#    #+#             */
/*   Updated: 2024/12/05 16:06:25 by amhernandez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	size_arr;
	int	*range;
	int	start_index;

	start_index = 0;
	if (start <= end)
		size_arr = end - start + 1;
	else
		size_arr = start - end + 1;
	range = (int *)malloc(size_arr * sizeof(int));
	if (!range)
		return (NULL);
	if (start <= end)
	{
		while (start <= end)
			range[start_index++] = start++;
	}
	else
	{
		while (start >= end)
			range[start_index++] = start--;
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
	range = ft_range(start, end);
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
