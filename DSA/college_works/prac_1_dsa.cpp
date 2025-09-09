#include <iostream>
using namespace std ;
int main(){
    // (a) Declare an integer, store its address in a pointer, print value and address.
    int a ;
    int *p = &a ;
    cout<<*p<<endl;
    cout<<p<<endl;


    // (b) Use pointer arithmetic to print elements of an integer array.
    int arr1[5] = {1,2,3,4,5};
    \
    for(int i = 0 ; i < 5 ; i++){
        cout<<*(arr1+i)<<" ";
    }
        cout<<endl;


    // c) Swap two integers using pointers in a function.
    int  x = 2 ; 
    int y = 3 ; 
    cout<<x<<" "<<y<<endl;
    int *p1 = &x;
    int *p2 = &y;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp ;
    cout<<x<<" "<<y<<endl;


    //(d) Dynamically allocate memory for n integers, input values, and print their sum.
    int n ; 
    cin >> n ;
    int *arr = new int [n];
        int sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "\nSum of elements: " << sum << endl;
    delete[] arr;
}