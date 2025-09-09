#include<iostream>
#include<algorithm>
#include<climits>
using namespace std ;
int largest_element(int arr[],int n){
    sort(arr,arr+n);
    return arr[n-1];
}

int largest_element1(int arr[],int n){
    int maxi = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}