#include<vector>
#include<iostream>
#include<algorithm>
#include <iostream>
#include <set>
#include <utility>  
#include<climits>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        int count3 = 0 , count2 = 0 ;
        while(n%3==0){
            n = n/3 ;
            count3++;
        }
        while(n%2==0){
            n = n/2 ;
            count2++;
        }
        if(n>1 || count2>count3){
            cout<<-1<<endl;
        }
        else{
            cout<<count3 + count3 - count2 <<endl;
        }

    }
    return 0;
}