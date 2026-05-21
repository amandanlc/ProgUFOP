#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Horario
{
    int hora;
    int min;
    int seg;
};
typedef struct Horario Horario;

struct Data
{
    int dia;
    int mes;
    int ano;
};
typedef struct Data Data;

struct Compromisso
{
    Data data;
    Horario horario;
    char text[200];
};
typedef struct Compromisso Compromisso;

int main(){
    Horario h = {1, 10, 23};
    Data d = {29, 3, 2023};
    Compromisso c = {d, h, "Aniversário"};

    printf("\nHorário: %d:%d:%d", h.hora, h.min, h.seg);
    printf("\nData: %d/%d/%d", d.dia, d.mes, d.ano);
    printf("\nCompromisso: %d:%d:%d  %d/%d/%d  %s", c.horario.hora, c.horario.min, c.horario.seg, c.data.dia, c.data.mes, c.data.ano, c.text);
    
    c.data.ano = 2000;
    strcpy(c.text, "Natal");
    printf("\nCompromisso: %d:%d:%d  %d/%d/%d  %s", c.horario.hora, c.horario.min, c.horario.seg, c.data.dia, c.data.mes, c.data.ano, c.text);


    printf("\nDigite o horário (hora min seg): ");
    scanf("%d %d %d", &h.hora, &h.min, &h.seg);
    printf("\nDigite a data (dia mês ano): ");
    scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
    while (getchar() != '\n');
    printf("\nDigite a descrição do compromisso (ex: Aniversário): ");
    fgets(c.text, sizeof(c.text), stdin);
    c.text[strcmp(c.text, "\n")] = 0;

    c.horario = h;
    c.data = d;

    printf("\nHorário: %d:%d:%d", h.hora, h.min, h.seg);
    printf("\nData: %d/%d/%d", d.dia, d.mes, d.ano);
    printf("\nCompromisso: %d:%d:%d  %d/%d/%d  %s", c.horario.hora, c.horario.min, c.horario.seg, c.data.dia, c.data.mes, c.data.ano, c.text);
    
    return 0;
}