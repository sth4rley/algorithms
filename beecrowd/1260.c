#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
void solve(vector<string> arvores) {
  map<string, int> teste;
  set<string> tipos;
  int total = 0;

  for (auto &x : arvores) {
    tipos.insert(x);
    total++;
    teste[x]++;
  }

  for (auto &y : tipos) {
    cout << y << " ";
    printf("%.4f\n", float(teste[y]) / total * 100.0);
  }
}
       */
typedef struct {
   char nome[31];
   int qnt;
} Arvore;

int main() {
   int casos;
   char strArv[31];
   int contador;
   Arvore *arvores = malloc(sizeof(Arvore));

   scanf("%d", &casos);
   getchar();
   getchar();
   
   for(int i = 0; i<casos; i++){
      contador = 0;
      printf(" CASO \n");
      while(1){
	 if(!gets(strArv) || !strcmp(strArv, "")){
	    break;
	 }
	 contador++;
	 arvores = realloc(arvores, contador*sizeof(Arvore));
	 strcpy(arvores[contador-1].nome, strArv);
	 printf("%s\n", arvores[contador-1].nome);
      }

      //solve()
   }


   /*
  for (int i = 0; i < casos; i++) {
    while (getline(cin, arv)) {
      if (arv != "") {
        arvores.push_back(arv);
      } else {
        solve(arvores);
        cout << endl;
        arvores.clear();
      }
    }
  }
  solve(arvores);
      */
}
