#include<iostream>
using namespace std ;
int sqrt_integer(int n){
int s = 0 ;
int e = n ;
long long int  mid = s + (e-s)/2;
int ans = -1 ;
while(s<=e){
    if(mid*mid > n ){
        e = mid - 1 ;
    }
    else if(mid*mid < n){
        ans =  mid ;
        s = mid + 1;
    }
    else {
        return mid ;
    }
    mid = s + (e-s)/2;
}
return ans ;
}

// increasing precison 
double precised_sqrt(int n , int precision ){
    double factor = 1 ;
    int int_sqrt = sqrt_integer(n);
    double ans = int_sqrt ;
    for(int i = 0 ; i < precision ; i++){
        factor = factor / 10 ;
        for(double j = ans; j*j<= n ; j = j + factor ){
            ans = j ;
        }
    }
    return ans ;
}
int main(){
    cout<<"Enter your number:";
    int n ;
    cin>>n ;
    int precision ;
    cout<<"Number to which precision needed:";
    cin>>precision;
    cout<<"Here is your ans:"<<precised_sqrt(n,precision)<<endl;
    
}