/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:31:09 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/20 14:42:09 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	while (power--)
	{
		res *= nb;
	}
	return (res);
}
/*#include <stdio.h>
int	main()
{
	printf("%d \n", ft_iterative_power(2, 5));
	printf("%d \n", ft_iterative_power(2, -5));
	printf("%d \n", ft_iterative_power(2, 0));
}*/
