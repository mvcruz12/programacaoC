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

    int numero1 = 1;

    printf("Antes do Incremento: %d\n", numero1);
    
    //numero1 = numero1 + 1;
    //numero1 += 1;   
   
    numero1++;    
    printf("Após Incremento: %d\n", numero1);

    //numero1 = numero1 - 1;
    //numero1 -= 1;
   
    numero1--;
    printf("Após decremento: %d\n", numero1);

    return 0;


}