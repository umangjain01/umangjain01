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
        int n ; 
        cin >> n ; 
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        int ans = 0;
        for(int i = 1 ; i < n ; i++){
            ans = max(ans,v[i]-v[0]);
        }
        for(int i = 0 ; i < n - 1  ; i++){
            ans = max(ans,v[n-1]-v[i]);
            ans = max(ans,v[i]-v[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0 ; 
}