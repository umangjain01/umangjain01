#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long binpow( long long a , long long b ){
    if(b==0){
        return 1 ;
    }
    long long res = binpow( a , b/2){
        if(b%2){
            return res * res * a;
        }
        return res * res ;
    }
}

long long binpow_bit( long long a , long long b ){
    long long res = 1 ;
    while( b > 0 ){
        int bit = a & 1 ;
        res = res * a ;
        a = a * a ;
        b = b >> 1 ;
    }
    return res ;
}

