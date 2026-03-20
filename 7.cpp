#include <iostream>
using namespace std;
int main() {
   int a, b; 
   // find the HCF of two number
   cin >> a >> b;
   int m = 0;
   if(a < b) m = a;
   else m = b;
   //   m = min(a,b); // you can use predefined function to find the min of two number
   for(int i = m; i >= 1; i--){
        if(a % i == 0 and b % i == 0){
            cout << i;
            break;
        }
   }
}