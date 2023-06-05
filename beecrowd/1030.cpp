#include <bits/stdc++.h>
using namespace std;

int main() {
  int nc, nPessoas, salto, prev;
  set<int> pessoas;
  cin >> nc;
  for (int i = 0; i < nc; i++) {
    pessoas.clear();
    cin >> nPessoas >> salto;
    for (int j = 0; j < nPessoas; j++) {
      pessoas.insert(j + 1);
    }
    prev = 0;

    while (pessoas.size() != 1) {
      if (salto + prev > nPessoas) {
        pessoas.erase(salto + prev - nPessoas);
        prev = salto + prev - nPessoas;
      } else {
        pessoas.erase(prev + salto);
        prev = salto + prev;
      }
    }
  }
}
