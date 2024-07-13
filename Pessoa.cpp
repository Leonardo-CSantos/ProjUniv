#include "Pessoa.h"

Pessoa::Pessoa (int diaNa, int mesNa, int anoNa)
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idade = -1;
}

void Pessoa::calculaIdade (int diaAt, int mesAt, int anoAt)
{
    idade = anoAt - anoP;
    if (mesAt < mesP)
        idade--;
    else if (mesAt == mesP && diaAt < diaP)
        idade--;
}

int Pessoa::getIdade ()
{
    return idade;
}

void Pessoa::printIdade ()
{
    printf ("A idade eh: %d\n", idade);
}