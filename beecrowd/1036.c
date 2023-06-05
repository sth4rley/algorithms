#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void delta (double *p);
void bhaskara (double *p);

int main () {

  double *p = (double*) calloc(6,(sizeof(double)));

  for (int i = 0; i<3; i++) {
    setbuf(stdin, NULL);
    scanf("%lf", p+i);
  }

  delta(p);
  bhaskara(p);

  // verifica se o DELTA eh negativo ou o A vale 0
  if((*(p+3)<0) || (*(p)==0))
    printf("Impossivel calcular\n");
  else
    printf("R1 = %.5lf\nR2 = %.5lf\n",*(p+4),*(p+5));

}

void delta (double *p){ 
  //DELTA =      B^2          -4*a*c
  *(p+3) = (pow((*(p+1)),2)-4*(*(p))*(*(p+2))); 
}

void bhaskara (double *p) { 
  //X1 X2 =  -B     +/- RAIZ DE DELTA /   2xA
  *(p+4) = ( -*(p+1) + sqrt(*(p+3)) ) / (2*(*(p)));
  *(p+5) = ( -*(p+1) - sqrt(*(p+3)) ) / (2*(*(p)));
}
