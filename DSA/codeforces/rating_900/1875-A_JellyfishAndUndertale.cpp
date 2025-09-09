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
        long long  a , b , n ;
        cin >> a >> b >> n ;
        long long  arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ; 
        }
        long long time = 0 ;
        for(int i = 0 ; i < n ; i++ ){
            if(1+arr[i] >= a ){
                time = time + a - 1 ;
            }
            else{
                time = time + arr[i];
            }
        }
        time = time + b ;
        cout<<time<<endl;
    }
    return 0 ;
}