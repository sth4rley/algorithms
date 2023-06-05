#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> notas){



  cout << endl << "Caso" << endl;
   for(auto& x: notas){
     cout << x << endl; 
   
   } 

}

int main () {
   int qntCasos;
   int qntNotas, nota;
   vector<int> notas;

   cin >> qntCasos;
   for(int i = 0; i<qntCasos; ++i){
      notas.clear();
      cin >> qntNotas;
      for(int j = 0; j<qntNotas; ++j){
	 cin >> nota;
	 notas.push_back(nota);
      }
      solve(notas);
   }
}
