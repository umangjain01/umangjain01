#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest_negative_no = INT_MAX;
    int smallest_positive_no = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout << 0;
            return 0; 
        }
        else if (arr[i] < 0) {
            int a = -arr[i];
            smallest_negative_no = min(smallest_negative_no, a);
        }
        else {
            smallest_positive_no = min(smallest_positive_no, arr[i]);
        }
    }

    cout << min(smallest_negative_no, smallest_positive_no);
    return 0;
}


