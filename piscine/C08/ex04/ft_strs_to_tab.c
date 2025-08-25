/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 07:25:42 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/25 10:09:25 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strcpy(char *dest, char *src)
{
        char    *characters;

        characters = dest;
        while (*src)
        {
                *dest = *src;
                src++;
                dest++;
        }
        *dest = '\0';
        return (characters);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct t_stock_str *greatStrs;
	char	*greatCpys;
	int		i;

	i = 0;
	greatStrs = (struct t_stock_str *)malloc(sizeof(t_stock_str) * (ac - 1));
	greatCpys = (char *)malloc(ac - 1);

	while (i < ac)
	{
		greatStrs[i].size = ft_strlen(av[i]);
		greatStrs[i].str = av[i];
		greatStrs[i].copy = ft_strcpy(greatCpys[i], av[i]);
		i++;
	}
	//char	*res;
	//struct t_stock_str idk;
	//idk = (struct t_stock_str)malloc(ft_strlen(av[0]));
	//t_stock_str->str = tmpArr;
	printf("%s", av[0]);
	return (0);
}

int	main(int argc, char **argv)
{
	ft_strs_to_tab(argc, argv);
}
