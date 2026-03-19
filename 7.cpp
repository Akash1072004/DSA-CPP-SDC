#include <iostream>
using namespace std;
int main() {
   int a, b; 
   cin >> a >> b;
   int m = 0;
//    if(a < b) m = a;
//    else m = b;
     m=min(a,b);
   for(int i = m; i >= 1; i--){
        if(a % i == 0 and b % i == 0){
            cout << i;
            break;
        }
   }
}

// write a program to find the minimum
// of three number