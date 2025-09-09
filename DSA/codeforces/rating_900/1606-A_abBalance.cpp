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
        string s ; 
        cin >> s ; 
        int n = s.size();
        int cnt1 = 0 ; 
        int cnt2 = 0 ; 
        for(int i = 0 ; i < n - 1 ; i++){
            if(s[i] == 'a' && s[i+1] == 'b'){
                cnt1++;
            }
            else if (s[i] == 'b' && s[i+1] == 'a'){
                cnt2++;
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            if(cnt1>cnt2){
                if(s[i]=='a'){
                    s[i]='b';
                    break;
                }
            }
            else if (cnt1<cnt2){
                if(s[i]=='b'){
                    s[i]='a';
                    break;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            cout<<s[i];
        }
        cout<<endl;
        

    }
}