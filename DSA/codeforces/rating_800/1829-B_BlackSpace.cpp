#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ;i++){
            cin >> arr[i];
        }
        int zero_count = 0;
        int max_distance = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]==0){
                zero_count++;
            }
            else{
                zero_count = 0;
            }
            max_distance = max(max_distance,zero_count);
        }
        cout<<max_distance<<endl;
    }
    return 0;
}