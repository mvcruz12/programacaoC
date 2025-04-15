#include <stdio.h>

int main(){

    /*
    Incremento(++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento(--)
    Pré-Decremento --a
    Põs decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes do Incremento: %d\n", numero1);
    
    //numero1 = numero1 + 1;
    //numero1 += 1;

    resultado = numero1++;

    printf("Após Pós-Incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;

    printf("Após Pré-Incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = numero1--;

    printf("Após Pós-Decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;

    printf("Após Pré-De3cremento - Número 1: %d - Resultado: %d\n", numero1, resultado);


    return 0; 

}