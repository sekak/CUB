/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekkak <asekkak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:49:03 by asekkak           #+#    #+#             */
/*   Updated: 2023/10/14 11:04:31 by asekkak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

void	part_check_tab(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\t')
			part_error();
		i++;
	}
}

void	check_tab(t_parser *parser)
{
	int		i;
	t_list	*lst;

	i = 0;
	lst = parser->file;
	while (lst)
	{
		part_check_tab(lst->content);
		lst = lst->next;
	}
}
