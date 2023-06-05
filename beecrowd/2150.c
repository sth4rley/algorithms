#include <stdio.h>
#include <string.h>

int contaVogais(char *, char *);

void main () {
    char vogais[500], texto[1000]; 
    while (scanf(" %[^\n]", vogais) != EOF){
        scanf(" %[^\n]", texto); 
        printf("%i\n", contaVogais(vogais, texto)); 
    } 
}

int contaVogais(char *vogais, char *texto) {
  int contador = 0;
  for(int i = 0; i<strlen(vogais); i++) // varre vogais
    for(int j = 0; j<strlen(texto); j++) // varre cada caractere
      if(*(vogais+i)==*(texto+j))
        contador++; 
  return contador;
}
