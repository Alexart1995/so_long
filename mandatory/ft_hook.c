/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 04:48:50 by snuts             #+#    #+#             */
/*   Updated: 2021/12/05 20:35:24 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	ft_exit(int x)
{
	(void) x;
	exit(0);
}

int	key_hook(int keycode, t_vars *vars)
{
	t_a	enemy;

	move_a(vars, &enemy);
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
	else if (keycode == 13 && (vars->m[vars->i - 1][vars->j] != '1'))
		move_up(vars);
	else if (keycode == 0 && (vars->m[vars->i][vars->j - 1] != '1'))
		move_left(vars);
	else if (keycode == 1 && (vars->m[vars->i + 1][vars->j] != '1'))
		move_down(vars);
	else if (keycode == 2 && (vars->m[vars->i][vars->j + 1] != '1'))
		move_right(vars);
	printf("%d\n", vars->steps);
	return (0);
}
