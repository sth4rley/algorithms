#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> matriz) {
   for (int i = 0; i < matriz.size(); i++) {
    
      for (int j = 0; j < matriz.size(); j++) {
      cout << matriz[i][j] << " ";
    }
      cout << endl;
  }
   cout << endl;
}

int main() {
  int casos;

  cin >> casos;

  int v, e;
  int a, b;

  for (int i = 0; i < casos; i++) {
    cin >> v >> e;
    vector<vector<int>> matriz(v, vector<int>(v, 0));
    for (int j = 0; j < e; j++) {
      cin >> a >> b;
      matriz[a][b] = 1;
    }
    solve(matriz);
  }
}
