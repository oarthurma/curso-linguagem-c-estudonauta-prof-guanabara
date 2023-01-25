#import <stdio.h>
void main() {
   char r;
   char s;
   printf("Digite so um letra: ");
   fflush(stdin);
   r = getchar();
   printf("Digite outra letra: ");
   fflush(stdin);
   s = getchar();
   printf("Voce digitou a letra \"%c\" \"%c\"", r, s);

}
