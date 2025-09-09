#include<iostream>
using namespace std ;
int finding_pivot(int arr[],int n ){
    int s = 0 ;
    int e = n-1;
    int mid = s +(e-s)/2 ;
    while(s<e){
        if(arr[mid]<arr[0]){
            e = mid ;
        }
        else{
            s = mid + 1 ;
        }
        mid = s +(e-s)/2 ;
    }
    return s ;
}
int binarySearch(int arr[], int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ 
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int search(int arr[],int n , int k){
    int s = 0 ;
    int e = n -1 ;
    int mid = s +(e-s)/2 ;
    int pivot = finding_pivot(arr,n) ;
    if(k>arr[pivot] && k < arr[e]){
        s = pivot ;
    }
    else {
        e = pivot - 1 ;
    }
    return binarySearch(arr,s,e,k) ;
}