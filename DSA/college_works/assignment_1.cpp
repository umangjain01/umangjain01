#include<iostream>
using namespace std ; 

//1.Write a C++ program to check if a given number is positive, negative, or zero using an if-else statement
void check_num (int n){
    if(n>0)cout<<"Number is positive";
    else if (n<0) cout<<"Number is negative ";
    else cout<<"Number is zero";
}
// 2.Write a program to determine whether a given number is even or odd using an if statement.
void check_num1(int n ){
    if(n%2==0)cout<<"Number is even";
    else cout<<"Number is odd";
}
// 3.Create a program that takes a month number (1–12) and prints the name of the month using a switch statement
void month (int month){
    switch(month) {
        case 1: cout << "January"; break;
        case 2: cout << "February"; break;
        case 3: cout << "March"; break;
        case 4: cout << "April"; break;
        case 5: cout << "May"; break;
        case 6: cout << "June"; break;
        case 7: cout << "July"; break;
        case 8: cout << "August"; break;
        case 9: cout << "September"; break;
        case 10: cout << "October"; break;
        case 11: cout << "November"; break;
        case 12: cout << "December"; break;
        default: cout << "Invalid month number!";
    }
}
// 4.Write a program to check whether a person is eligible to vote (age ≥ 18) using if-else.
void check_age(int age){
    if(age>=18){
        cout<<"Eligible to vote";
    }
    else{
        cout<<"Not eligible to vote";
    }
}
// 5.Take an integer input and print whether it is divisible by 5 and 11 or not using if-else.
void check_div(int n){
    if(n%5==0 && n%11==0){
        cout<<"YES";
    }
    else cout<<"NO";
}
// 6. Write a program to print the first 10 natural numbers using a while loop.
void print(int n ){
    while(n--){
        cout<<n;
    }
}
// 7.Create a program that prints the multiplication table of a given number using a for loop.
void table(int n ){
    int i = 1;
    while(i<=10){
        cout<<n*i<<" ";
    }
}
// 8.Write a program to calculate the sum of digits of a number using a while loop.
void sum(int n ){
    int sum = 0 ; 
    while(n){
        int digit = n % 10 ; 
        sum = sum + digit ;
        n = n / 10;
    }
}
// 9.Write a program to find the factorial of a number using a for loop.
void factorial (int n ){
    long long ans = 1 ;
    for(int i = 0 ; i <= n ; i++){
        if(ans*i<INT_MAX){
        ans = ans * i;
        }
    }
}
// 10.Create a program to reverse a number using a while loop.
int reverse( int n ){
    int ans = 0 ;
    while(n){
        int digit = n % 10 ;
        if(ans > INT_MAX/10 || (ans = INT_MAX/10 && digit > 7)) return 0 ;
        if(ans < INT_MIN/10 || (ans = INT_MIN/10 && digit > -8)) return 0;
        ans = ans * 10 + digit ;
        n = n / 10 ;
    }
    return ans ;
}
// 11Write a program to print the following pattern using nested loops:
// *
// * *
// * * *
// * * * *
void pattern (int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; i++){
            cout<<"*";
        }
    }
}
// 12. Write a program using do-while to repeatedly ask the user to enter a password until they enter the correct one ("admin123").
int main{
string s ;
do{
    cout<<"Enter your password:";
    cin>>s;
}
while(s!="admin123");

// 14.Write a function in C++ that swaps the values of two integers using pointers. Then, demonstrate
// the function by swapping two numbers in the main() function.
int x , y ; 
cin >> x , y;
    int *a = &x, *b = &y;
    int temp = *a;
    *a = *b;
    *b = temp;

// 15. Print 1-D and 2-D array using pointers.
int arr[10] = {1,2,3};
for(int i = 0 ; i < 10 ; i++){
    cout<<*(arr+i);
}
int arr2D[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(arr2D + i) + j) << " ";  
        }
    }
}

