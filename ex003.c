#include <stdio.h>
#include <locale.h>
void main () {
setlocale(LC_ALL, "Portuguese");

char nome[30];
int idade;
float peso;

printf("<<< EX003 - Dados >>>");

printf("\n\nQual o seu nome? ");
gets(nome);

printf("Quantos anos voc� tem? ");
scanf("%d", &idade);

printf("Qual � o seu peso? (Kg) ");
scanf("%f", &peso);

printf("\n-------<<< PROCESSANDO >>>-------");
printf("\nMuito prazer, %s. Voc� tem %d anos e pesa %.2fKg correto? ", nome, idade, peso);
}
