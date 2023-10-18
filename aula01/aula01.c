#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //permite usar acentos
    setlocale (LC_ALL,"");
    printf("Olá, mundo!\n");

    //lendo um valor inteiro
    int a = 5;
    int b =6;
    printf("%d\n", a + b);
    printf("O valor de a é: %d\n", a);
    scanf(" %dn", &a);
    printf("O valor de a mudou para %d", a);

    //lendo um valor quebrado
    float c = 6.8;
    printf("O valor de c é: %f\n", c);
    scanf(" %f", &c);
    printf("O valor de c mudou para %f", c);

    //lendo letras
    char letra = 'p';
    printf("O valor de letra é: %c\n", letra);
    fflush(stdin);
    scanf(" %c", &letra);
    printf("O valor de letra mudou para %c", letra);
}
