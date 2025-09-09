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
        string s ;
        cin >> s ;
        int count = 0;
        int low = 0 ;
        int high = n-1;
        while(s[low]!=s[high] && low < high ){
            count++;
            low++;
            high--;
        }
        cout<<n-2*count<<endl;
    }
    return 0;
}