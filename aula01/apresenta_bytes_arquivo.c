/*
Autor: Wanderson Gomes da Costa
Data da Ultima Modificacao: 28 de fevereiro de 2022
E-mail: wanderson.gomes.costa05@aluno.ifce.edu.br

IDE usada: VSCode
Sistema Operacional: Ubuntu

Problema:
    Programa que apresenta todos os bytes e bits de um arquivo informado.

    Exemplo no console:
    $ ./apresenta_bytes_arquivo
    Informe o caminho completo do arquivo: arquivo.txt

    Saida esperada:
    1 -> 01100001
    2 -> 01100010
    3 -> 01100011
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
    unsigned long int numero_byte;
    unsigned char byte;
    char nome_arquivo[250];
    FILE* arquivo = NULL;

    //leitura
    printf("Informe o caminho completo do arquivo: ");
    scanf("%s", nome_arquivo);

    //processamento
    arquivo = fopen(nome_arquivo, "rb");

    if (arquivo == NULL) {
        printf("Error: arquivo nao encontrado!\n");
    } else {
        numero_byte = 1;
        while (fread(&byte, sizeof(byte), 1, arquivo)) {
            printf("%lu -> ", numero_byte++);
            imprimirByte(byte);
        }
    }

    
    return 0;
}