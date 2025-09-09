#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <utility>
#include <climits>
#include <map>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        long long best = 1; // 1 is always a divisor <= n/2 (for n>=2)
        for (long long i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                long long d1 = i;
                long long d2 = n / i;
                if (d1 <= n / 2) best = max(best, d1);
                if (d2 <= n / 2) best = max(best, d2);
            }
        }
        cout << best << " " << (n - best) << '\n';
    }
    return 0;
}
