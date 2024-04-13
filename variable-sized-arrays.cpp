#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Create a vector of vectors to store the arrays
    vector<vector<int>> arr(n);

    // Input the arrays
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        arr[i].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> arr[i][j];
        }
    }

    // Process queries
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }

    return 0;
}
