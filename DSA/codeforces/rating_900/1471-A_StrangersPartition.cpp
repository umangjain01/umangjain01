#include<vector>
#include<iostream>
#include<algorithm>
#include <set>
#include <utility>  
#include<climits>
#include<map>
#include<cmath>
using namespace std;
int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int n  , x ;
        cin >> n >> x ; 
        vector<int>v(n);
        long long sum = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
            sum+=v[i];
        } 
        long long min_ops = (sum+x-1)/x;
        long long  ans1 = 0 ; 
        for(int i = 0 ; i < n ; i++){
            ans1+=(v[i]+x-1)/x;
        }
        cout<<min_ops<<" "<<ans1<<endl;
    }
}