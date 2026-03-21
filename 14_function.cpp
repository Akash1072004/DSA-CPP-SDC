#include <iostream>
using namespace std;
int main(){
    // check palindrome
    int n; cin >> n;
    int r = 0;
    int a = n;
    while(n != 0){
        r = r*10 + (n % 10);
        n /= 10;
    }
    if(r == a) cout << "true";
    else cout << "false";
}