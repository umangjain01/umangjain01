#include<iostream>
using namespace std ;

int sum (int n){
    int sum = 0 ;
    for(int i = 1 ;i<=n ; i++){
        sum = sum + i ;
    }
    return sum ;
}
void f(int i , int sum){
    if(i<1){
        cout<<sum;
        return ;
    }
    f(i-1,sum+i)
}

int func(int n){
    if(n==0) return 0 ;
    return n+ func(n-1);
}