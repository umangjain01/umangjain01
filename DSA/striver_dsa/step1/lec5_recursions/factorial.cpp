#include<iostream>
using namespace std ;
int factorial(int n ){
    if(n==0) return 1 ;
    return n * factorial(n-1);
}
int factorial1(int n ){
    int ans = 1 ;
    for(int i = 1 ; i<=n ; i++){
        ans = ans * i ;
    }
    return ans ;
}
void factorial2 (int i , int ans ){
    if(i==0) {
    cout << ans ;
    return ;}
    factorial2(i-1,ans*i);

}