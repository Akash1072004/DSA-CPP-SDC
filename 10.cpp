#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    bool check = true;
    for(int i = 1; check == true; i++){
       int x;
       cin>>x;
       if(x == -1) {
        break;
       }
       sum = sum + x;
    }
    cout<<sum;
}