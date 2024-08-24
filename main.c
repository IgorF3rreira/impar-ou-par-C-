#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numero_aleatorio;
  int escolha;

   srand(time(NULL));
  
  printf("escolha PAR [1] OU IMPAR [2]: ");
  scanf("%d", &escolha);

  system("clear");

  numero_aleatorio = rand() % 100;
  
  printf(" %d\n", numero_aleatorio);


  if (escolha == 1) {
    printf("você escolheu PAR\n");

    if(numero_aleatorio % 2 == 0) {
      printf("você ganhou\n");
    }else{
      printf("você perdeu");
    }
  

    }else if (escolha == 2) {
    printf("você escolheu IMPAR\n");
    if(numero_aleatorio % 2 != 0) {
      printf("você ganhou\n");
    }else{
      printf("você perdeu");
    }
    
  }else {
  printf("invalido tente novamente\n");
  }

}
