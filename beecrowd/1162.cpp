#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> numeros) {
  int tmp, contador = 0;
  for (int k = 0; k < numeros.size(); k++)
    for (int i = 0; i < numeros.size() - 1 - k; i++)
      if (numeros.at(i) > numeros.at(i + 1)) {
        tmp = numeros.at(i);
        numeros.at(i) = numeros.at(i + 1);
        numeros.at(i + 1) = tmp;
        contador++;
      }
  return contador;
}

int main() {
  vector<int> numeros;
  int casos;
  int vagoes, vAt;

  cin >> casos;

  for (int i = 0; i < casos; i++) {
    numeros.clear();
    cin >> vagoes;
    for (int j = 0; j < vagoes; j++) {
      cin >> vAt;
      numeros.push_back(vAt);
    }
    cout << "Optimal train swapping takes " << solve(numeros) << " swaps."
         << endl;
  }
}
