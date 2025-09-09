#include<vector>
#include<iostream>
#include<algorithm>
#include <iostream>
#include <set>
#include <utility>  
#include<climits>
using namespace std;
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        int n = s.size();
        int zero = 0 ; 
        int one = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }
        int ans = min(zero,one);
        if(ans%2 != 0 ){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
    return 0 ;
}