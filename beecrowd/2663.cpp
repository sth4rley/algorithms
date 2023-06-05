#include <bits/stdc++.h>
using namespace std;

int main (){
   int competidores;
   int min, na, ap = 0;
   int latest = -1;
   vector<int> notas;

   cin >> competidores >> min;

   for(int i = 0; i<competidores; ++i){
      cin >> na;
      notas.push_back(na); 
   }

   sort(notas.rbegin(), notas.rend());
   
   for(int i = 0; i<min || latest == notas[i]; i++){
      ap++; 
      latest = notas[i];
   }

   cout << ap << endl;

}
