#include<vector>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void merge(int arr[] , int low , int mid , int high ){
    int left = low ; 
    int right = mid + 1 ;
    vector<int>temp;
    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i-low];
    }
}
void merge_sort(int arr[] , int low , int high){
    int mid = low + (high-low)/2 ;
    if(low>=high) return  ; 
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high); 
}