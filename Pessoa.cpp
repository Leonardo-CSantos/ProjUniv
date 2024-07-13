#include <stdio.h>

typedef struct Pessoa
{
    int diaP;
    int mesP;
    int anoP;
    int idade;

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
    Pessoa Einstein, Newton;

    Einstein.diaP = 14;
    Einstein.mesP = 3;
    Einstein.anoP = 1879;
    Einstein.idade = -1;    

    Newton.diaP = 4;
    Newton.mesP = 1;
    Newton.anoP = 1643;
    Newton.idade = -1;

    Einstein.calculaIdade(13, 7, 2024);
    Newton.calculaIdade(13, 7, 2024);

    printf ("A idade de Einstein seria: %d anos\n", Einstein.idade);
    printf ("A idade de Newton seria: %d anos\n", Newton.idade);
    return 0;
}