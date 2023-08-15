#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define db(x) cout << #x << ": " << x << endl
#define log(x) cout << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const int LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void) { _
  int m, n; // m -> numero de cidades, n -> numero de caminhos ligando essas cidades (arestas) 

  while(cin >> m >> n and m){

    // Aqui criamos a nossa representacao do grafo, que será uma lista de adjacencia
    vector<vector<pair<int,int>>> grafo(m);

    // le as n arestas
    for(int i = 0; i<n; i++){
      int u,v,cost;
      cin >> u >> v >> cost;
      // guardamos a "ida e volta"
      grafo[u].push_back({v, cost}); 
      grafo[v].push_back({u, cost});
    }
  
  // como o enunciado afirma que o grafo é conexo, nao importa por onde iniciamos
  // nesse caso, pegaremos o vértice 0
 
  // definicao da fila de prioridade
  priority_queue<pair<int,int>> pq;

  // vetor para registrar os elementos já visitados
  vector<bool> visitados(m, false);
  // define o vertice 0 como visitado
  visitados[0] = true;

  // percorrer todas as arestas que saem do 0
  // por padrao a fila de prioridade é sempre máxima, e como queremos o minimo utilizamos o '-'
  // assim, o maior negativo se torna o menor positivo
  // lembrando first é a conexao e que second é o custo  
  for(auto ed: grafo[0]) pq.push({-ed.second, ed.first}); 

  int soma = 0;

  while(pq.size()){
    // aqui o custo é o first, o second é o vértice
    // pega e remove o primeiro elemento da fila de prioridade
    pair<int, int> menor = pq.top(); pq.pop();

    // caso esse elemento já tenha sido visitado ignoramos ele
    if(visitados[menor.second]==true) continue;
    
    // se nao marca ele como visitado e prossegue com o algoritmo
    visitados[menor.second] = true;

    // somamos o custo do nó, utilizamos negativos para voltar o numero para positivo
    soma += -menor.first;

    // repete o procedimento de expansao
    for(auto ed: grafo[menor.second]) pq.push({-ed.second, ed.first}); 
  }

  cout << soma << endl;

  }
 
  exit(0);
}