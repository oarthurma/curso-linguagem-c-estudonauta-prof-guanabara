#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int n, sorteia;
    printf("<<< EX005 - Ser� que voc� acerta? >>>\n\n");
    sorteia = rand() % 5 + 1;
    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual � o seu palpite? ");
    scanf("%i", &n);
    printf("Eu pensei no n�mero %i e voc� pensou no %i", sorteia, n);
}
