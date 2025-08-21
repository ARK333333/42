/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 13:14:18 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/21 13:15:21 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	**lst;
	int		len;
	int		i;

	i = 0;
	while (++i < argc)
	{
		len = 0;
		while (argv[i][len++])
			;
		lst[i] = argv[i];
		write(1, argv[i], len - 1);
		write(1, "\n", 1);
	}
}
