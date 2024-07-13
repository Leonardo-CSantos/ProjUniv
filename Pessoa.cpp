#include <stdio.h>

typedef struct Pessoa
{
    int diaP;
    int mesP;
    int anoP;
    int idade;

    Pessoa (int diaNa, int mesNa, int anoNa)
    {
        diaP = diaNa;
        mesP = mesNa;
        anoP = anoNa;
        idade = -1;
    }

    void calculaIdade (int diaAt, int mesAt, int anoAt)
    {
        idade = anoAt - anoP;
        if (mesAt < mesP)
            idade--;
        else if (mesAt == mesP && diaAt < diaP)
            idade--;
    }

}Pessoa;

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