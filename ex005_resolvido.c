#include <stdio.h>
#include <locale.h>
#include <time.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");
    int nc = rand() % 5 + 1;
    int nj;
    printf("Qual � o seu palpite? ");
    scanf("%i", &nj);
    printf("Eu pensei no n�mero %i e voc� pensou no n�mero %i.\n", nc, nj);
}
