#include <bits/stdc++.h>
using namespace std;
int main() {
    // find the fac of n 
    int n;
    cin >> n;
    int fac = 1;
    for(int i = 1; i <= n; i++){
        fac = fac* i;
    }
    cout << fac;
}