/*
Autor: Wanderson Gomes da Costa
Data da Ultima Modificacao: 05 de marco de 2022
E-mail: wanderson.gomes.costa05@aluno.ifce.edu.br

IDE usada: VSCode
Sistema Operacional: Ubuntu

Problema:
    Programa que apresenta o numero -73 em complemento de 2.

    Exemplo no console:
    $ ./numeros_complemento_2

    Saida esperada:
    Numero: -73
    10110111

    Numero: 183
    10110111
*/
#include <stdio.h>
#include <stdlib.h>

//FUNCAO QUE IMPRIME OS BITS DE UM BYTE INFORMADO
void imprimirByte(unsigned char byte) {
    //dados
    unsigned char aux = 0b10000000;
    register int i;
    
    //processamento
    for (i = 0; i < 8; i++) {
        ((byte & aux) == aux) ? putc('1', stdout) : putc('0', stdout);
        aux = aux >> 1;
    }
    printf("\n");
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    char numero1 = -73;
    unsigned char numero2 = -73;

    //processamento
    printf("Numero: %d\n", numero1);
    imprimirByte(numero1);

    printf("\nNumero: %d\n", numero2);
    imprimirByte(numero2);

    return 0;
}