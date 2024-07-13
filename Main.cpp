#include "Pessoa.h"

int main ()
{
    Pessoa Einstein (14, 3, 1879);
    Pessoa Newton (4, 1, 1643);

    Einstein.calculaIdade(13, 7, 2024);
    Newton.calculaIdade(13, 7, 2024);

    printf ("A idade de Einstein seria: %d anos\n", Einstein.idade);
    printf ("A idade de Newton seria: %d anos\n", Newton.idade);
    
    return 0;
}