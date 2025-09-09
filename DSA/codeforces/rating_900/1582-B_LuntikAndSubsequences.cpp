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
            cin>>v[i];
        }
        bool ans = false ;
        int cnt0 = 0 ;
        int cnt1 = 0 ; 
        for(int i = 0 ; i < n ; i++){
            if(v[i]==1){
                ans = true ;
                cnt1++;
            }
            if(v[i]==0){
                cnt0++;
            }
        }
        if(ans){
            cout<<cnt1*(1LL<<cnt0)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0 ;
}