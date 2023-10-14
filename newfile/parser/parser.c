/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekkak <asekkak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:16:44 by asekkak           #+#    #+#             */
/*   Updated: 2023/10/14 10:19:18 by asekkak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	checked_file(char *ac)
{
	int	fd;

	fd = open(ac, O_RDONLY);
	if (fd == -1)
		return (0);
	return (fd);
}

int	textures(t_parser *parser, char *file)
{
	if (checked_file(file) == 0)
		return (0);
	return (1);
}

t_parser	parts_parser(char *file)
{
	t_parser	parser;

	initialize_value(&parser);
	textures(&parser, file);
	line_by_line(file, &parser);
	map(&parser);
	return (parser);
}

void	parser(char *file)
{
	t_parser	p;

	if (check_extension(file) == 1)
	{
		printf("Error");
		exit(0);
	}
	if (check_file(file) == 0)
	{
		printf("Error");
		exit(0);
	}
	p = parts_parser(file);
}
