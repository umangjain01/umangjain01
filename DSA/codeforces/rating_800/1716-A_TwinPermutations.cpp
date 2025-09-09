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
        int n , a , b ; 
        cin >> n >> a >> b ; 
        if(a+b+2<=n || (a==n && b==n)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}