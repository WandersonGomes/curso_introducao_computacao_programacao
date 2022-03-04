/*
Autor: Wanderson Gomes da Costa
Data da Ultima Modificacao: 04 de marco de 2022
E-mail: wanderson.gomes.costa05@aluno.ifce.edu.br

IDE usada: VSCode
Sistema Operacional: Ubuntu

Problema:
    Programa que apresenta problema com ponto flutuante.

    Exemplo no console:
    $ ./problema_com_ponto_flutuante

    Saida esperada:
    0.1 + 0.1 + 0.1 nao e igual a 0.3
    0.7 = 0.69999999999999995559
    0.92 = 0.92000000000000003997
    0.125 = 0.12500000000000000000
*/
#include <stdio.h>

int main() {
    //dados
    double numero1 = 0.7,
           numero2 = 0.92,
           numero3 = 0.125;

    //processamento - saida
    if ((0.1 + 0.1 + 0.1) == 0.3)
        printf("0.1 + 0.1 + 0.1 e igual a 0.3\n");
    else
        printf("0.1 + 0.1 + 0.1 nao e igual a 0.3\n");

    printf("%.1lf = %.20lf\n", numero1, numero1);
    printf("%.1lf = %.20lf\n", numero2, numero2);
    printf("%.1lf = %.20lf\n", numero3, numero3);

    return 0;
}