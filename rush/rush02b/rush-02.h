#ifndef RUSH_02_H
#define RUSH_02_H

#include <unistd.h>
#include <stdlib.h>

typedef struct {
	char *number;
	char *word;
} DictEntry;

extern DictEntry *dict;
extern int dict_size;
extern const int G_BUFFER_SIZE;
extern const int G_MAX_ENTRIES;
extern const int G_O_RDONLY;

void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_atoi(char *str);
int is_valid_number(char *str);
void read_dict(char *dict_name);
void parse_line(char *line);
void free_dict(void);
void process_number(char *number);
void print_number_word(char *num);
void process_triple(char *triple);
void process_double(char *double_digit);
void process_large_number(char *number);
void print_scale(int scale_index);
int ft_strlen(char *str);
void ft_strncpy(char *dest, char *src, int n);
int ft_max(int a, int b);
int ft_min(int a, int b);
void ft_putchar(char c);
int open(const char *pathname, int flags);

#endif
