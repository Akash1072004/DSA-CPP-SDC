#include <bits/stdc++.h>
using namespace std;
int f(int &x, int &y){
    x = 5;
    y = 6;
    return x+y;
}
int main() {
    int a = 10, b = 5;
    cout << a + b << "\n";
    cout << f(a, b) << "\n";
    cout << a + b << "\n";
}