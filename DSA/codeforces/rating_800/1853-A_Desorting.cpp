#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        long long arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        if(!is_sorted(arr,arr+n)){
            cout<<0<<endl;
            continue ;
        }
        else{
        long long gap = LLONG_MAX;
        for(int i = 0 ; i < n-1 ;i++){
            gap = min(gap,arr[i+1]-arr[i]);
        }
        cout<<gap/2 + 1<<endl;
        }
    }
    return 0 ;
}