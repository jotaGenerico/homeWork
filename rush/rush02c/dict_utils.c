/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cda <jose-cda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:11:58 by jose-cda          #+#    #+#             */
/*   Updated: 2024/07/28 21:11:59 by jose-cda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

DictEntry *dict = NULL;
int dict_size = 0;

void parse_line(char *line)
{
	int i;
	int colon_pos;

	i = 0;
	colon_pos = -1;
	while (line[i] && i < BUFFER_SIZE)
	{
		if (line[i] == ':')
		{
			colon_pos = i;
			break;
		}
		i++;
	}
	if (colon_pos == -1 || dict_size >= MAX_ENTRIES)
		return;
	dict[dict_size].number = line;
	dict[dict_size].word = &line[colon_pos + 2];
	line[colon_pos] = '\0';
	dict_size++;
}

void read_dict(char *dict_name)
{
	int fd;
	char buf[BUFFER_SIZE];
	int bytes_read;
	int i;
	int start;

	dict = malloc(sizeof(DictEntry) * MAX_ENTRIES);
	if (!dict)
	{
		ft_putstr("Memory allocation error\n");
		exit(1);
	}
	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		free(dict);
		exit(1);
	}
	bytes_read = read(fd, buf, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		ft_putstr("Dict Error\n");
		close(fd);
		free(dict);
		exit(1);
	}
	i = 0;
	start = 0;
	while (i < bytes_read)
	{
		if (buf[i] == '\n')
		{
			buf[i] = '\0';
			parse_line(&buf[start]);
			start = i + 1;
		}
		i++;
	}
	close(fd);
}

void free_dict(void)
{
	if (dict)
	{
		free(dict);
		dict = NULL;
	}
}
