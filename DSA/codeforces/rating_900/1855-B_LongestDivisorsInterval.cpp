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
        long long n ; 
        cin >>  n ; 
        int i = 1 ;
        while(n%i==0){
            i++;
        }
        cout<<i-1<<endl;
    }
    return 0;
}