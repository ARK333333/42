/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:00:32 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/21 20:27:39 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*ptr;
	int	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	ptr = malloc(len_src);

	len_src = 0;
	while (src[len_src])
	{
		ptr[len_src] = src[len_src];
		len_src++;
	}
	ptr[len_src] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int	main()
{
	char	*str = "guten tag";
	char	*dup;

	dup = ft_strdup(str);
	printf("%s", dup);
}*/
