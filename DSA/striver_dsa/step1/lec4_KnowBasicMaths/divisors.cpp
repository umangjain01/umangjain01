#include<iostream>
using namespace std ;
void divisors_print(int n ){
    vector<int>divisors ;
    int count = 0 ;
    for(int i = 1 ; i<=n ; i++){
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    int len_arr = divisors.size();
    for(int i = 0 ; i<len_arr;i++){
        cout<<divisors[i]<<" ";
    }
}
int main(){
    divisors_print(36);
}


// 2nd method 
                                
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDivisors(int n) {
    // Initialize an empty
    // vector to store the divisors
    vector<int> divisors; 

    // Iterate up to the square
    // root of n to find divisors
    // Calculate the square root of n
    int sqrtN = sqrt(n); 
    
    // Loop from 1 to the
    // square root of n
    for (int i = 1; i <= sqrtN; ++i) { 
        // Check if i divides n
        // without leaving a remainder
        if (n % i == 0) { 
            // Add divisor i to the list
            divisors.push_back(i); 

            // Add the counterpart divisor
            // if it's different from i
            if (i != n / i) {
                // Add the counterpart
                // divisor to the list
                divisors.push_back(n / i); 
            }
        }
    }
    
    // Return the list of divisors
    return divisors; 
}


int main() {
    int number = 12;
    vector<int> divisors = findDivisors(number);

    cout << "Divisors of " << number << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}
                                
                            