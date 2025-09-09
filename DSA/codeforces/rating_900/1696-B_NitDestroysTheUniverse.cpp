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
        bool ex = false ;
        int ans = 0 ; 
        for(int i = 0 ; i < n ; i++){
            if(v[i] != 0 ){
                ex = true ;
            }
            else{
                if(ex){
                    ans++;
                }
                ex = false ;
            }
        }
        if(ex)ans++;
        cout<<min(ans,2)<<endl; 
    }
    return 0 ; 
}