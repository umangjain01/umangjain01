#include<vector>
#include<iostream>
#include<algorithm>
#include <iostream>
#include <set>
#include <utility>  
#include<climits>
#include<map>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , k ; 
        cin >> n >> k ;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int ans = 1 ;
        int length = 1 ;
        for(int i = 1 ; i < n ; i++){
            if(v[i]-v[i-1]<=k){
                length++;
            }
            else{
                ans = max (ans,length);
                length = 1 ;
            }
        }
        ans = max (ans,length);
        cout<<n-ans<<endl;
    }
    return 0 ; 
}