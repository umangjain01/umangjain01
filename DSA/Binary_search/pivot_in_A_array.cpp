#include<iostream>
using namespace std ;
int finding_pivot(int arr[],int n ){
    int s = 0 ;
    int e = n-1;
    int mid = s +(e-s)/2 ;
    while(s<e){
        if(arr[mid]<arr[e]){
            e = mid ;
        }
        else{
            s = mid + 1 ;
        }
        mid = s +(e-s)/2 ;
    }
    return s ;
}