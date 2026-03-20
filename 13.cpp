#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    bool check = true;
    while(check){
        int n; cin >> n;
        if(n == -1){
            check = false;
        }
        sum += n;
    }
    cout<<sum + 1;
}