/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:31:09 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/20 23:19:09 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (!(power == 0))
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
/*#include <stdio.h>
int	main()
{
	printf("%d \n", ft_recursive_power(2, 5));
	printf("%d \n", ft_recursive_power(2, -5));
	printf("%d \n", ft_recursive_power(2, 0));
}*/
