/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:29:46 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:29:47 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	verify_map(t_cub3d *cub3d)
{
	set_map_text(cub3d);
	check_map_empty_line(cub3d);
	verify_map_characters(cub3d);
	verify_map_walls(cub3d);
	verify_map_spaces(cub3d);
}
