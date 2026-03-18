#include <bits/stdc++.h>
using namespace std;
int main() {
    // Check if the given number is Prime
    // or Composite.
    // Condition - No. must be greater than 1
    int n;
    bool isPrime = true;
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i=2 ; i<=n-1 ; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"Number is Prime";
    }else{
        cout<<"Number is Composite";
    }
}