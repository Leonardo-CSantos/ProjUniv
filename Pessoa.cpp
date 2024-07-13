#include <stdio.h>

typedef struct Pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;
}Pessoa;

int calculaIdade (Pessoa p, int diaAt, int mesAt, int anoAt)
{
    int idd = anoAt - p.ano;
    if (mesAt < p.mes)
        idd--;
    else if (mesAt == p.mes && diaAt < p.dia)
    {
        idd--;
    }
    return idd;
}

int main ()
{
    Pessoa Einstein, Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;    

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;

    Einstein.idade = calculaIdade(Einstein, 13, 7, 2024);
    Newton.idade = calculaIdade(Newton, 13, 7, 2024);

    printf ("A idade de Einstein seria: %d anos\n", Einstein.idade);
    printf ("A idade de Newton seria: %d anos\n", Newton.idade);
    return 0;
}