#ifndef GLOBALS_H
#define GLOBALS_H

// Definições de tamanhos e flags
#define G_BUFFER_SIZE 1024
#define G_MAX_ENTRIES 1000
#define G_O_RDONLY 0

// Estrutura para armazenar entradas do dicionário
typedef struct {
    int comprimento_numero;
    char *numero;
    char *palavra;
} DictEntry;

// Variáveis globais usadas no projeto
extern DictEntry *dict;
extern int dict_size;

#endif // GLOBALS_H
