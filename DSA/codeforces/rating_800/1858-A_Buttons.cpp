#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ; 
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        bool ans ;
        int a , b , c ; 
        cin >> a >> b >> c ;
        if(a==b){
            if(c%2==0){
                ans = 0;
            }
            else{
                ans = 1 ;
            }
        }
        else if(a>b){
            ans = 1 ;
        }
        else{
            ans = 0;
        }

        if(ans){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}