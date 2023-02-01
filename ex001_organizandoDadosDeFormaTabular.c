#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX001 - LISTAGEM >>>");
    printf("\n\n Listagem de Alunos\n");
    printf(" Nome\t\tNota");
    printf("\n ---------------------");
    printf("\n Ana Beatriz\t8.5");
    printf("\n Bianca Martins\t9.0");
    printf("\n Cláudio Sá\t5.5");
    printf("\n Giovana Silva\t7.5\n");
}
