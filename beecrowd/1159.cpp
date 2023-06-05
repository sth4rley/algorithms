#include <bits/stdc++.h>
using namespace std;

int ith_digit(int n, int i) {
    return (int) (n / pow(10, i)) % 10;
}

int main () {
   cout << ith_digit(3043, 0) << endl;
   cout << ith_digit(3043, 1) << endl;
   cout << ith_digit(3043, 2) << endl;
   cout << ith_digit(3043, 3) << endl;
}

