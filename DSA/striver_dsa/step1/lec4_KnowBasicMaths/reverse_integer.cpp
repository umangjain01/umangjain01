#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int reverse(int n ){
    int ans = 0 ;
    while(n!=0){
        int digit = n%10;
        if(ans > INT_MAX/10 || ans<INT_MIN){
            return 0;
        }
        int ans = ans*10 + digit ;
        n = n/10;
    }
    return ans ;

}
// if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
            //     return 0;
            // }
            // if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) {
            //     return 0;
            // }