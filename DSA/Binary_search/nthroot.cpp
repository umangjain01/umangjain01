#include<vector>
#include<iostream>
#include<algorithm>
#include <iostream>
#include <set>
#include <utility>  
#include<climits>
using namespace std;
int power(int n , int m ){
    if(m==0) return 1 ;
    int ans = power(n , m/ 2) ;
    if(m%2 != 0){
        return ans * ans * n ;
    }
    else{
        return ans * ans ;
    }
}