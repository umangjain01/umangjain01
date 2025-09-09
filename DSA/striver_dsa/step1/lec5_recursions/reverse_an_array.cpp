#include<iostream>
using namespace std ;
int rev1(int arr[],int n){
    int ans[];
    for(int i = 0 ,i < n ; i++){
        ans[i]=arr[n-1-i];
    }
    return ans ;
}

void rev2 (int arr[],int n ){
    for(int i = 0 ; i<n/2 ; i++){
        swap(arr[i],arr[n-1-i]);
    }
}

void rev3(int arr[],int n ){
    int s = 0 ;
    int e = n - 1 ;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}