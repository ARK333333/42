/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 10:38:41 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/22 11:30:18 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i

	i = 0;
	while (i
	return (max - min);
}
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	**range;
	int	min;
	int	max;
	
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("%d", ft_ultimate_range(range, min, max));
}
