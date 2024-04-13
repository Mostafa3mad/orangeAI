#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int num;
        cin >> num;

        auto it = lower_bound(arr.begin(), arr.end(), num);
        if (*it == num) {
            cout << "Yes " << (it - arr.begin() + 1) << endl;
        } else {
            cout << "No " << (it - arr.begin() + 1) << endl;
        }
    }

    return 0;
}
