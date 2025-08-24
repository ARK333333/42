/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhede <aalkhede@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 05:04:41 by aalkhede          #+#    #+#             */
/*   Updated: 2025/08/25 07:21:11 by aalkhede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef char	*point;
typedef struct {
	int	x;
	int	y;
} t_point;

void	set_point(t_point *point);
