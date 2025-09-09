#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ; 
int main(){
    int t ;
    cin>> t ;
    while(t--){
        int n ;
        cin>> n ;
        string s ;
        cin>> s ;
        bool  ans = false ;
        int count = 0 ;
        for(int i = 0 ; i < s.size();i++){
            if( i+ 2 < s.size() && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.' ){
                cout<<2<<endl;
                ans = true ;
                break;
            }
            else{
                if(s[i]=='.'){
                    count++;
                }
            }
        }
        if(!ans){
        cout<<count<<endl;
        }
    }
    return 0 ;
}