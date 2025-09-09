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
        string s ; 
        cin >> s ; 
        map<int,int>m;
        for(int i = 0 ; i < n ; i++){
            m[s[i]-'a'] ++;
        }
        int ans = 0 ;
        for(auto it : m){
            if(it.second % 2 != 0){
                ans++;
            }
        }
        if(ans-1<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}