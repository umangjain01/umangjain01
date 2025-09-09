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
        int n  ;
        cin >> n ; 
        vector<int>s(n);
        for(int i = 0 ; i < n ; i++){
            cin >> s[i];
        }
        for(int i = 0 ; i < n ; i++){
            if(s[i]==1){
                s[i]++;
            }
        }
        for(int i = 0 ; i < n-1 ; i++){
            if(s[i+1]%s[i]==0){
                s[i+1]++;
            }
        }
        for(int i = 0 ; i < n ; i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    } 
}