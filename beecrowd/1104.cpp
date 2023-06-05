#include <bits/stdc++.h>
using namespace std;

void solve(set<int> cA, set<int> cB) {
  set<int> aux;
  aux.insert(cA.begin(), cA.end());
  aux.insert(cB.begin(), cB.end());
  cout << aux.size() - max(cA.size(), cB.size()) << endl;
}

int main() {
  int a, b, c;
  set<int> cA, cB;
  while (true) {
    cA.clear();
    cB.clear();
    cin >> a >> b;
    if (!a && !b) 
      break;  
    for (int i = 0; i < a; i++) {
      cin >> c;
      cA.insert(c);
    }
    for (int j = 0; j < b; j++) {
      cin >> c;
      cB.insert(c);
    }
    solve(cA, cB);
  }
}
