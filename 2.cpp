#include<iostream>
using namespace std;
int main(){
    /* 
    nested if
    take age as inputand age%5==0)
    check if age is greater than 20 or less than 30
    and is also divisible by 5
    */
   int age;
   cin>>age;
   if(age > 20 and age < 50){
        if( age % 5 == 0){
            if(age > 40){
                cout << "large";
            }
            else {
                cout << "true";
            }
        }
        else cout << "---";
   }
   else cout << "false";
}