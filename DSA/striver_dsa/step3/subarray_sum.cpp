#include<vector>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int solution1(vector<int>& ans , int k ){
    int n = ans.size();
    int len = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; i < n ; j++){
            int s = 0 ;
            for(int k = i ; k <= j ;k++){
                s += ans[k];
            }
            if(s==k){
                len = max(len , j - 1 + 1) ;
            }
        }
    }
    return len ;
}

int solution2 (vector<int>& ans , int k ){
    int n = ans.size() ;
    int len = 0 ;
    for(int i = 0 ; i < n ; i++){
        int s = 0 ;
        for(int j = i ; j < n ; j++){
            s += ans[j] ;
        }
        if(s==k){
            len = max(len , j - i + 1);
        }
    }
    return len ;
}

int solution3 ( vector<int>& ans , int k ){
    map< int , int > m ;
    int sum = 0 ;
    int maxlen = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        sum += v[i];
        if(sum == k ){
            maxlen = max(maxlen , j - i + 1 )
        }
        long long rem = sum - k ;
        if(m.find(rem) != m.end()){
            len = i - m[rem];
            maxlen = max(len,maxlen);
        }
        if(m.find(sum) == m.end()){
            m[sum] = i ;
        }
    }
    return maxlen;

}

int solution4( vector<int>&ans , int k ){
    int n = ans.size() ; 
    int left = 0 ; 
    int sum = 0 ;
    int len = 0 ;
    for(int right = 0 ; right < n ; right++ ){
        sum += ans[right];
        while(left<=right && sum > k){
            sum -= ans[left];
            left++ ;
        }
        if(sum==k){
            len = max(len , right - left + 1 );
        }

    }
    return len ;
}