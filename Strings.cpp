#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    // Length of strings
    int len_a = a.size();
    int len_b = b.size();
    cout << len_a << " " << len_b << endl;
    
    // Concatenation
    string c = a + b;
    cout << c << endl;
    
    // Swap first characters
    swap(a[0], b[0]);
    cout << a << " " << b << endl;

    return 0;
}
