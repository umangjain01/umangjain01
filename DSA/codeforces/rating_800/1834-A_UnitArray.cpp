#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t ;
    cin >> t ; 
    while(t--){
        int n ;
        cin >> n ;
        int arr[n];
        int operations =0;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        int nv_c = 0 ; 
        int pv_c = 0 ;
        for(int i =0 ; i < n ;i++){
            if(arr[i]<0){
                nv_c++;
            }
            else{
                pv_c++;
            }
        }

        while(nv_c>pv_c || nv_c%2 !=0){
            pv_c++;
            nv_c--;
            operations++;
        }
        cout<<operations<<endl;
        }
    return 0;
}