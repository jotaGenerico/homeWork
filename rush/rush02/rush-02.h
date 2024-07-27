#ifndef RUSH_02_H
#define RUSH_02_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096
#define MAX_ENTRIES 41

typedef struct {
	char *number;
	char *word;
} DictEntry;

extern DictEntry *dict;
extern int dict_size;

void ft_putstr(char *str);
int ft_strcmp(char *s1, char *s2);
void read_dict(char *dict_name);
void process_number(char *number);
void parse_line(char *line);
int is_valid_number(char *str);
void free_dict(void);
long long ft_atoll(const char *str);
void process_large_number(char *number);
void print_number_word(long long num);
void print_triple(int triple, int scale);

#endif
