#include <bits/stdc++.h>
using namespace std;
int main() {
    for(int i = 1; i <=5; i++){
        for(int j = 1; j <= 5; j = j+1){
           if(i == 5 or j == 1 or i == j ){
            cout<<"* ";
           }
           else {
            cout<<"  ";
           }
        }
        cout<<"\n";
    }
}