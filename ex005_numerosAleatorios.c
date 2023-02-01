#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int n, sorteia;
    printf("<<< EX005 - Será que você acerta? >>>\n\n");
    sorteia = rand() % 5 + 1;
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%i", &n);
    printf("Eu pensei no número %i e você pensou no %i", sorteia, n);
}
