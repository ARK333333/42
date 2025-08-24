/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 16:02:57 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/25 02:56:14 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	count = 0;
	while (dest[count] != '\0')
	{
		count += 1;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*comb;
	int		i;
	int		strslen;

	comb = (char *)malloc(0);
	if (size <= 0)
		return (comb);
	strslen = 0;
	i = 0;
	while (i < size)
		strslen += ft_strlen(strs[i++]);
	comb = (char *)malloc(strslen + size * sizeof(sep));
	comb[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(comb, strs[i]);
		if (i + 1 < size)
			ft_strcat(comb, sep);
		i++;
	}
	comb[strslen + size * sizeof(sep) + 1] = '\0';
	return (comb);
}
/*
int	main(int argc, char **argv)
{
	char	*str[] = {"a1", "a2"};
	char	*sep = "";
	char	*res;

	res = ft_strjoin(2, str, sep);
	printf("noraml case: %s\n", res);
	free(res);
	res = ft_strjoin(0, argv, sep);
	printf("zero size case: %s\n", res);
	free(res);
	
}*/
