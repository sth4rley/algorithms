#include <bits/stdc++.h>
using namespace std;

float solve(map<string, float> pDisponiveis, map<string, int> pCompras,
            vector<string> produtos) {
  float total = 0;
  for (auto &p : produtos) {
    total += (pDisponiveis[p] * pCompras[p]);
  }
  return total;
}

int main() {
  int casos, disp, comp;
  string fruta;
  float preco;
  int qnt;
  map<string, float> pDisponiveis;
  map<string, int> pCompras;
  vector<string> produtosCompra;

  cin >> casos;
  for (int i = 0; i < casos; i++) {
    pDisponiveis.clear();
    pCompras.clear();
    produtosCompra.clear();

    cin >> disp;
    for (int j = 0; j < disp; j++) {
      cin >> fruta >> preco;
      pDisponiveis.insert(pair<string, float>(fruta, preco));
    }
    cin >> comp;
    for (int k = 0; k < comp; k++) {
      cin >> fruta >> qnt;
      pCompras.insert(pair<string, int>(fruta, qnt));
      produtosCompra.push_back(fruta);
    }
      printf("R$ %.2f\n", solve(pDisponiveis, pCompras, produtosCompra) );
  }
}
