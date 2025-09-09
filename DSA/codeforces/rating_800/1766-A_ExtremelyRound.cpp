#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <utility>
#include <climits>
#include <map>
#include <cmath>
using namespace std;
bool check (long long x ){
    int digits = 0 ; 
    int zeroes = 0 ; 
    while(x){
        if(x%10==0){
            zeroes++;
        }
        digits++;
        x= x/10;
    }
    return digits == zeroes+1 ;
}
int main(){
    vector<int>v;
    for(int i = 0 ; i <= 999999 ; i++){
        if(check(i)){
            v.push_back(i);
        }
    }
    int t ; 
    cin >> t ; 
    while(t--){
        int ans = 0 ;
        long long m ; 
        cin >> m ;
        for(int i = 0 ; i <v.size() ; i++){
            if(v[i]<=m){
                ans ++;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
}