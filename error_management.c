/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:48:08 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/09/07 20:37:20 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	free_map(char **map)
{
	int	i;
	int	j;

	j = 0;
	(void)j;
	if (map == NULL)
		exit(0);
	i = 0;
	while (map[i] != NULL)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	print_error_message(char *error_message, t_game *game)
{
	ft_printf(error_message);
	free_map(game->map->vector);
	exit(EXIT_FAILURE);
}

void	print_error(char *error_message)
{
	perror(error_message);
	exit(EXIT_FAILURE);
}
