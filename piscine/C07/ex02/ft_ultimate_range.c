/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 10:38:41 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/24 16:02:09 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (-1);
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (len);
}
/*#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*range;
	int	min;
	int	max;
	
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("%d", ft_ultimate_range(&range, min, max));
}*/
