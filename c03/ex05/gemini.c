unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    unsigned int total_len = 0;
    unsigned int i = 0;

    // Calcula o comprimento da string de destino
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    // Calcula o comprimento da string de origem
    while (src[src_len] != '\0') {
        src_len++;
    }

    total_len = dest_len + src_len;

    // Verifica se há espaço suficiente para concatenar
    if (size > dest_len) {
        // Copia no máximo size - dest_len - 1 caracteres de src para dest
        while (src[i] != '\0' && dest_len + i < size - 1) {
            dest[dest_len + i] = src[i];
            i++;
        }
        dest[dest_len + i] = '\0'; // Adiciona o caractere nulo de terminação
    }
    //Se size for menor ou igual ao dest_len, não copia nada, mas retorna o tamanho total.

    return total_len;
}
