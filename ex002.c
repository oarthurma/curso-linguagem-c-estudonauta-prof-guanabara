#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX002 - Especiais >>>");
    printf("\n\n=-=-=-=-=-=-=-=-=-==-=-=-=-=-=");
    printf("\n \\a\t=\tBeep");
    printf("\n \\n\t=\tNova linha");
    printf("\n \\t\t=\tTabula��o");
    printf("\n \\\\\t=\tBarra");
    printf("\n %%%%\t=\tPorcentagem");
    printf("\n \\\?\t=\tInterroga��o");
    printf("\n=-=-=-=-=-=-=-=-=-==-=-=-=-=-=\n");
}