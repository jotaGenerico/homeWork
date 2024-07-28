#include "rush-02.h"

void parse_line(char *line)
{
	int i;
	int colon_pos;

	i = 0;
	colon_pos = -1;
	while (line[i] && i < G_BUFFER_SIZE)
	{
		if (line[i] == ':')
		{
			colon_pos = i;
			break;
		}
		i++;
	}
	if (colon_pos == -1 || dict_size >= G_MAX_ENTRIES)
		return;
	dict[dict_size].number = line;
	dict[dict_size].word = &line[colon_pos + 2];
	line[colon_pos] = '\0';
	dict_size++;
}

void read_dict(char *dict_name)
{
	int fd;
	char buf[G_BUFFER_SIZE];
	int bytes_read;
	int i;
	int start;

	dict = malloc(sizeof(DictEntry) * G_MAX_ENTRIES);
	if (!dict)
	{
		ft_putstr("Memory allocation error\n");
		exit(1);
	}
	fd = open(dict_name, G_O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		free(dict);
		exit(1);
	}
	bytes_read = read(fd, buf, G_BUFFER_SIZE);
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
