#include<vector>
#include<iostream>
#include<algorithm>
#include <iostream>
#include <set>
#include <utility>  
#include<climits>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        long long n ; 
        cin >> n ;
        while(n%2==0){
            n = n / 2 ;
        }
        if(n>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0 ;
}