#include <bits/stdc++.h>
using namespace std;

int main () {
   int mov, sI, menorV, mvAt;
   cin >> mov >> sI;
   menorV = sI;
   for(int i = 0; i<mov; i++){
     cin >> mvAt;
      sI += mvAt;
      if(menorV>sI){
	 menorV = sI;
      }
   }
   cout << menorV << endl;
}
