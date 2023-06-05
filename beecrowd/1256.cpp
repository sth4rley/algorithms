#include <bits/stdc++.h>
using namespace std;

int fHash(int x, int k) { return x % k; }

void solve(vector<int> elementos, int key) {
  vector<vector<int>> vv(key, vector<int>(key, -1));
  for (int i = 0; i < elementos.size(); i++) {
    vv[fHash(elementos.at(i), key)].push_back(elementos.at(i));
  }
  for (int j = 0; j < key; j++) {
    cout << j << " -> ";
    for (auto &y : vv[j])
      if (y != -1)
        cout << y << " -> ";
    cout << "\\" << endl;
  }
}

int main() {
  int casos;
  int qntEl, atEl, key;
  vector<int> elementos;

  cin >> casos;
  for (int i = 0; i < casos; i++) {
    elementos.clear();
    cin >> key >> qntEl;
    for (int j = 0; j < qntEl; j++) {
      cin >> atEl;
      elementos.push_back(atEl);
    }
    solve(elementos, key);
    if (i + 1 != casos) {
      cout << endl;
    }
  }
}
