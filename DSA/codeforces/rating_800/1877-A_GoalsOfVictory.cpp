#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ; 
int main(){
    int t ; 
    cin>> t ;
    while(t--){
        int n ; 
        cin>> n ;
        int arr [n-1];
        int ans = 0 ;
        for(int i = 0 ; i < n-1 ; i++){
            cin>> arr[i];
            ans = ans + arr[i];
        }
        cout<<-ans<<endl; 
        
    }
}