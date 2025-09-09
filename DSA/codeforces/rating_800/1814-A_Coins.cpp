#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <utility>
#include <climits>
#include <map>
#include <cmath>
using namespace std ; 
int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        long long  n , k ; 
        cin >> n >> k ;   
        if(n%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        if(k%2==0){
            cout<<"NO"<<endl;
        }
        else{
            if((n-k)%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}