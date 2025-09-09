#include<vector>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;


// Modular function to keep values in [0, MOD)
int mod(int a, int m = MOD) {
    return ((a % m) + m) % m;
}

// Template class for modular combinatorics
template <class T>
class Math {
public:
    vector<T> fact, invfact;

    // Constructor
    Math() {}

    // Precompute factorials and inverse factorials up to n
    Math(int n) {
        fact.resize(n);
        invfact.resize(n);

        fact[0] = invfact[0] = 1;
        for (int i = 1; i < n; i++) {
            fact[i] = mod(i * fact[i - 1]);                 // fact[i] = i!
            invfact[i] = modinv(fact[i]);                   // invfact[i] = inverse of i!
        }
    }

    // Modular inverse using Fermat’s Little Theorem (only for prime MOD)
    T modinv(T x, T m = MOD) {
        return expo(x, m - 2, m);
    }

    // Fast exponentiation: computes base^exp % m in O(log exp)
    T expo(T base, T exp, T m = MOD) {
        T res = 1;
        while (exp) {
            if (exp & 1) res = mod(res * base, m);  // Multiply if lowest bit is 1
            base = mod(base * base, m);             // Square base
            exp >>= 1;                               // Divide exponent by 2
        }
        return res;
    }

    // Compute nCk = n! / (k! * (n-k)!) % MOD
    T choose(T n, T k) {
        if (k < 0 || k > n) return 0;
        T ans = fact[n];
        ans = mod(ans * invfact[n - k]);
        ans = mod(ans * invfact[k]);
        return ans;
    }
};

int main(){
    return 0;
}