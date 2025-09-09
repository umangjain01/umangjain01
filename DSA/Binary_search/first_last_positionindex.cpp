#include<iostream>
using namespace std ;
int first_occurence(int arr[],int n , int k ){
    int s = 0 ;
    int e = n - 1 ;
    int mid = s + (e-s)/2;
    int ans = -1 ;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid ;
            e = mid - 1  ;
        }
        else if(arr[mid]<k){
            s = mid + 1 ;
        }
        else{
            e = mid - 1 ;
        }
        mid = s + (e-s)/2;
        
    }
    return ans ;
}
int last_occurence(int arr[],int n ,int k ){
    int s = 0 ;
    int e = n-1 ;
    int mid = s + (e-s)/2 ; 
    int ans = -1 ;
    while(s<=e){
        if(arr[mid]>k){
            e = mid - 1 ;
        }
        else if(arr[mid]<k){
            s = mid + 1 ;
        }
        if(arr[mid]==k){
            ans = mid ;
            s = mid + 1 ;
        }
        mid = s + (e-s)/2 ;
    }
    return ans ;
}
int main(){
    int arr1[9] = {1,2,2,2,3,3,3,3,3};
    cout<<first_occurence(arr1,9,3)<<endl;
    cout<<last_occurence(arr1,9,3)<<endl;
}

// total number of occurence we can finf by subtracting both 