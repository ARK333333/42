/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 10:38:41 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/23 18:08:39 by ark3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		//range = NULL;
		return (0);
	i = 0;
	while (i < (max - min))
	{
		*range[i] = i;
		i++;
	}
	return (max - min);
}
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	**range;
	int	min;
	int	max;
	
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("%d", ft_ultimate_range(range, min, max));
}
