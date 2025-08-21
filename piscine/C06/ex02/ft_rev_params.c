/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 13:13:26 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/21 13:14:08 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	while (argc-- > 1)
	{
		len = 0;
		while (argv[argc][len++])
			;
		write(1, argv[argc], len - 1);
		write(1, "\n", 1);
	}
}
