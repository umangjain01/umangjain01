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
        int n ;
        cin >> n ;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        if(n%2==0){
            cout<< 2<<endl ; 
            cout<< 1 << " " <<  n  <<endl;
            cout<< 1 << " " <<  n  <<endl;
        }
        else{
            cout<< 4<<endl ; 
            cout<< 1 << " " <<  n - 1 <<endl;
            cout<< 1 << " " << n - 1 <<endl;
            cout<< n-1 << " " <<  n  <<endl;
            cout<< n-1 << " " <<  n  <<endl;
        }
        }
        return 0;
    }

