/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:07:07 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/21 20:20:48 by ark3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	i;

	range = max - min;
	arr = malloc(sizeof(int) * range + 1);
	if (!range)
		return (0);
	i = 0;
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*arr;
	int	size;
	int	i;
	int	min;
	int	max;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	arr = (ft_range(min, max));

	size = max - min;
	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}*/
