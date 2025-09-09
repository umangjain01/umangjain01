#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k ;
        int operations = 0 ;
        if(k==1){
            operations = n ;
            continue ;
        }
        if(k>n){
            k = n ;
        }
        if(n%2==0){
            operations = n/(k-1)  ;
            if(n%(k-1)==0){
            }
            else{
                operations++;
            }
        }
        else {
            operations = (n-k)/(k-1) + 1 ;
            if((n-k)%(k-1)==0){
            }
            else{
                operations++;
            }
        }
        cout<<operations<<endl;
    }
    return 0 ;

}