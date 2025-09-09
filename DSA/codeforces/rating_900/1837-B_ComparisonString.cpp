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
        int n;
        cin >> n ;
        string s ;
        cin >> s ;
        long long ans = 1;
        long long final = 1 ;
        for(int i = 1 ; i < n ; i++){
            if(s[i]==s[i-1]){
                ans ++;
            }
            else{
                final = max(final,ans);
                ans = 1 ;
            }
        }
        final = max(final,ans);

        cout<<final+1<<endl;
    }

}