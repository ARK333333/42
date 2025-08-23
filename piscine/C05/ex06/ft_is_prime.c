/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ark3 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:11:12 by ark3              #+#    #+#             */
/*   Updated: 2025/08/23 17:52:55 by ark3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	
	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		 if (!(nb % i))
			 return (0);
		 i++;
	}
	return (1);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("%d", ft_is_prime(atoi(argv[1])));
}*/
