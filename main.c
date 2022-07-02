#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void inverter(char vet[]){
    int i, aux, fim, tam = strlen(vet);

    fim = tam - 1; // índice do último caracter
    for(i = 0; i < tam/2; i++){
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
}

int main(void) {
  char palavra[200] = {"valor base"};
  printf("Insira a palavra: \n");
  scanf("%s", palavra);
  inverter(palavra);
  printf("%s", palavra);
  return 0;
}