/*
Autor: Wanderson Gomes da Costa
Data da Ultima Modificacao: 28 de fevereiro de 2022
E-mail: wanderson.gomes.costa05@aluno.ifce.edu.br

IDE usada: VSCode
Sistema Operacional: Ubuntu

Problema:
    Escrever um programa que imprima o numero e o valor do argumento
    passado pela linha de comando.

    Exemplo no console:
    $ ./imprimir_argumentos_linha_comando arg1 arg2 arg3

    Saida esperada:
    1 -> ./imprimir_argumentos_linha_comando
    2 -> arg1
    3 -> arg2
    4 -> arg3
*/
#include <stdio.h>

int main(int argc, char** argv) {
    int numero_argumento;

    for (numero_argumento = 1; numero_argumento <= argc; numero_argumento++)
        printf("%d -> %s\n", numero_argumento, argv[numero_argumento-1]);

    return 0;
}