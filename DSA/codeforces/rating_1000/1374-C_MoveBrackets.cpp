#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <utility>
#include <climits>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        string s ; 
        cin >> s ; 
        int m = s.size();
        int ans = 0 ;
        int depth= 0 ; 
        for(int i = 0 ; i <  m ;){
            if(s[i]=='('){
                depth++;
                i++;
            }
            else{
                if(depth==0){
                    s.erase(i,1);
                    s.push_back(')');
                    ans++;
                    
                }
                else{
                    depth--;
                    i++;
                }
            }
        }
        cout<<ans<<endl;
    }
}