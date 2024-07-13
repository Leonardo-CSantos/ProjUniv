#include "Pessoa.h"

int main ()
{
    Pessoa Einstein (14, 3, 1879);
    Pessoa Newton (4, 1, 1643);

    Einstein.calculaIdade(13, 7, 2024);
    Newton.calculaIdade(13, 7, 2024);

    Einstein.printIdade();
    Newton.printIdade();
    
    return 0;
}