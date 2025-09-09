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
    int t ; cin >> t ; 
    while(t--){
        int  n; 
        cin >> n ; 
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        for(int it : arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}