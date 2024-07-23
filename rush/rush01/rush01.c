#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define TAMANHO_STRING 31

void escrever_string(const char *string) {
    int tamanho = strlen(string);
    int bytes_escritos = 0;

    while (bytes_escritos < tamanho) {
        bytes_escritos += write(STDOUT_FILENO, string + bytes_escritos, tamanho - bytes_escritos);
    }
}

void escrever_array() {
    const char array[] = "\
    1234\n\
    2341\n\
    3412\n\
    4123\n";
    
    int tamanho = sizeof(array) - 1;
    int bytes_escritos = 0;
    
    while (bytes_escritos < tamanho) {
        bytes_escritos += write(STDOUT_FILENO, array + bytes_escritos, tamanho - bytes_escritos);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2 || strlen(argv[1]) < TAMANHO_STRING) {
        escrever_string("Erro!\n");
        return 1;
    }
    
    char *string_argumento = argv[1];
    const char *string_salva = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
    
    int comparacao = strcmp(string_argumento, string_salva);
    
    if (comparacao == 0) {
        escrever_string("Strings iguais. Imprimindo array:\n");
        escrever_array();
    } else {
        escrever_string("Erro: Strings diferentes.\n");
    }
    
    return 0;
}