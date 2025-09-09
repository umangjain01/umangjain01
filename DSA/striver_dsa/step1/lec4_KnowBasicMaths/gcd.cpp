#include<iostream>
using namespace std ;
int gcd(int n1 , int n2){
    int min_of_two = min(n1,n2);
    for(int i = min_of_two ; i>=1 ; i--){
        if(n1%i==0 && n2%i==0){
            return i ;
        }
    }
    return 1;
}
int main(){
    int n = 12;
    int m =15 ;
    cout<<gcd(n,m);
}