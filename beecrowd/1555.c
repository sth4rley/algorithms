#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define equacoes 3

// prototipos das funcoes
int fRafael (int x, int y);
int fBeto (int x, int y);
int fCarlos (int x, int y);
int posMaiorValor (int *arr, int sizeArr); 

int main () {
  /* VARIAVEIS */
  int ct, x, y;
  int resultados [3];

  // leitura e validacao dos casos de teste
  do {
    scanf("%i", &ct);
  } while(ct<0);
    
  for (int i = 0; i<ct; i++) { 
    // entrada do x e y
    setbuf(stdin, NULL);
    scanf("%i %i", &x, &y); 
    // calculo das esquacoes
    resultados[0] = fRafael(x,y);
    resultados[1] = fBeto(x,y);
    resultados[2] = fCarlos(x,y);
    
    switch(posMaiorValor(resultados, sizeof(resultados)/sizeof(int))) {
      case 0:
        printf("Rafael venceu\n");
        break;
      case 1:
        printf("Beto venceu\n");
        break;
      case 2:
        printf("Carlos venceu\n");
        break;
    } 
  }
}

//A função que Rafael escolheu é r(x, y) = (3x)² + y².
int fRafael (int x, int y) { 
  return pow((3*x),2) + pow((y),2);
}

//Já Beto escolheu a função b(x, y) = 2(x²) + (5y)². 
int fBeto (int x, int y) { 
 return 2*pow(x,2) + pow(5*y,2);
}

//Carlos, por sua vez, escolheu a função c(x, y) = -100x + y^3
int fCarlos (int x, int y) { 
  return  -100*x + pow(y,3); 
}

// recebe um array e retorna o indice do elemento
// que possui maior valor
int posMaiorValor (int *arr, int sizeArr) { 
  int bNum, idx;
  for (int i = 0; i<sizeArr; i++)
    if(!i || bNum<*(arr+i)){ 
      bNum = *(arr+i);
      idx = i;
    }
  return idx;
}
