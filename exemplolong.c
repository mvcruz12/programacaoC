#include <stdio.h>

int main(){

    int numeroNormal = 2147483647; // Valor máximo de int
    long int numeroGrande = 2147483647;

    printf("Número Regular (int): %d\n", numeroNormal);
    printf("Número Grande long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; // Valor maior que o máximo de int
    printf("Número Grande Atualizado (long int): %ld\n", numeroGrande);

    return 0;


}