#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , x ;
        cin >> n >> x ;
        int arr[n];
        for(int k = 0 ; k < n ; k++){
            cin >> arr[k];
        }
        int index = -1; 
        int i ;
        for(i = 0 ; i < n ; i++){
            if(arr[i]==1){
                index = i ;
                break;
            }
        }
        bool cond = true;
        for(int j = i+x ; j < n ; j++){
            if(arr[j]==1){
                cond = false ;
                break;
            }
        }
        if(cond){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0 ;
}