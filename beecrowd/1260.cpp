#include <bits/stdc++.h>
using namespace std;

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

int main() {
  vector<string> arvores;
  int casos;
  string arv;
  cin >> casos;
  getchar();
  getchar();
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
}
