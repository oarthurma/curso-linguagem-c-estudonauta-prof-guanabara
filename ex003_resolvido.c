#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Qual � o seu nome? ");
    char nome[20];
    gets(nome);
    printf("Quantos anos voc� tem? ");
    int idade;
    scanf("%i", &idade);
    printf("Qual � o seu peso? (Kg) ");
    float peso;
    scanf("%f", &peso);
    printf("\n------<<< PROCESSANDO >>>------\n");
    printf("Muito prazer, %s. Voc� tem %i anos e pesa %.2fKg, correto?\nFIM.", nome, idade, peso);

}
