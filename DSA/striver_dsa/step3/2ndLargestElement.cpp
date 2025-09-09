#include<iostream>
#include<algorithm>
#include<climits>
using namespace std ;
int fn(int arr[], int n ){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    if(n==0 || n == 1){
        return -1;
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    int mini1 = maxi - mini ;
    int req = -1;
    for(int i = 0 ; i < n-1 ; i++){
        if((arr[i]!= maxi && maxi-arr[i])<mini1){
            mini1 = maxi-arr[i];
             req = arr[i];
        }
    }
    return req;
}

// or we can find larget element puttinf if ciondition to be elemrnt not equal to larget that will be more easier 
