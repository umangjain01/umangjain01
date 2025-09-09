#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ; 
int main(){
int t ;
cin>> t ;
while(t--){
    int n , x ;
    cin >> n >> x ;
    int arr[n];

    for(int i = 0 ; i<n; i++){
        cin>> arr[i];
    }
    int ans = arr[0];
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i+1]-arr[i] > ans ){
            ans = arr[i+1]- arr[i];
        }
    }
    int ans1 = 2*(x-arr[n-1]);
    cout<<max(ans,ans1)<<endl;
}
return 0 ; 
}