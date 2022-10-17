#include <stdio.h>

void change(unsigned int *primeiroNumero, unsigned int *segundoNumero) {
    unsigned int aux; //Variable that will disapear at the end of this function

    aux = *segundoNumero; //Write '*' before a value passed by reference
    *segundoNumero = *primeiroNumero;
    *primeiroNumero = aux;
}

int main()
{
    unsigned int primeiro = 10;
    unsigned int segundo = 5;
    printf("Primeiro %u \n", primeiro);
    printf("Segundo %u \n\n", segundo);

    change(&primeiro, &segundo); //Don't need to make a return, cu'z i'm passing by reference

    printf("Primeiro: %u \n", primeiro);
    printf("Segundo: %u \n", segundo);

    return 0;
}
