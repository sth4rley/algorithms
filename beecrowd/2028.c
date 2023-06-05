#include <stdio.h>

int cont(int);
void seq(int);

int main (){
  int num, caso = 1;
  while(scanf("%i",&num) != EOF){
    printf("Caso %i: %i numero%s\n", caso++, cont(num), cont(num)==1?"":"s"); 
    seq(num);
    printf("\n\n");
  }
}

int cont (int num) {
  if(!num)
    return 1;
  else
    return num + cont(num-1);
}

void seq (int num) {
  for(int j = 0; j<=num; j++) {
    if(j==0)
      printf("0");
    else
      for(int i = 0; i<j; i++)
        printf(" %i", j);  
  }
}
