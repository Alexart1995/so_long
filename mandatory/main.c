/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:41:11 by snuts             #+#    #+#             */
/*   Updated: 2021/12/06 20:07:28 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"
int	main(int argc, char **argv)
{
	t_vars	vars;
	char	*line;

	vars.size = 32;
	vars.fd = open(argv[1], O_RDONLY);
	line = get_next_line1(vars.fd);
	vars.m = ft_split(line, '\n', &vars);
	if (argc != 2 || ft_check(line, &vars) == 1 || ft_check_2(&vars) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, vars.size * vars.length,
			vars.size * (vars.height), "Sanya 42");
	mlx_hook(vars.win, 2, 1L << 0, key_hook, &vars);
	mlx_hook(vars.win, 17, 1L << 0, ft_exit, NULL);
	vars.img = malloc(sizeof(t_data));
	images(vars.img, &vars);
	mlx_loop_hook(vars.mlx, ft_render, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
