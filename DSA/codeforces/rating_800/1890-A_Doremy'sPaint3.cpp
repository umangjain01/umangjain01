#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std ; 
int main(){
    int t ; 
    cin >> t ;
    while(t--){
        int n ;
        cin >>  n ;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a [i];
        }
        map<long long , long long> freq1 ; 
        for(int i = 0 ; i < n ; i++){
            freq1[a[i]]++;
        }

        if(freq1.size()> 2 ){
            cout<<"No"<< endl ;
            continue;
        }
        int freq_number1 = freq1.begin()->second;
        int freq_number2 = freq1.rbegin()->second ; 
        if(abs(freq_number1 - freq_number2) ==  1 || freq_number1 - freq_number2 == 0 ){
            cout<<"Yes"<<endl;
        }
        else {
            cout<< "No"<<endl;
        }
    }
    return 0 ;
}