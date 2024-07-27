uso do Makefile passo a passo:

Primeiro, certifique-se de que o arquivo Makefile está no mesmo diretório que seus arquivos fonte (.c) e de cabeçalho (.h).
Abra um terminal e navegue até o diretório onde estão seus arquivos e o Makefile.
Para compilar o projeto, você pode usar os seguintes comandos:

a. Para limpar completamente o projeto (remover arquivos objeto e executável):
make fclean

b. Para compilar o projeto:
make

c. Se você quiser fazer ambos em sequência (limpar e depois compilar), você pode usar:
make fclean && make


Outros comandos úteis:
Para remover apenas os arquivos objeto (.o), mas manter o executável:
make clean

Para recompilar tudo do zero (equivalente a make fclean && make):
make re

Após a compilação bem-sucedida, você terá um executável chamado rush-02 no seu diretório.

Para executar o programa:
./rush-02 [número]

./rush-02 [número] [caminho_do_dicionário]


Exemplo de uso completo:

make fclean
make
./rush-02 42


