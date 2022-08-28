#include <stdio.h>
#define MAX 4

// definições de tipos
typedef struct 
{
    int nota[MAX];
    int qtd_Nota;
}NOTAS;
typedef struct{
    char nome[50];
    int matricula;
    NOTAS notas;
    double media;
} ALUNO;




