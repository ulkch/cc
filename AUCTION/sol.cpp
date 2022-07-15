#include <iostream>

using namespace std;

int main() {
    int t, a, b, c = 0;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        if (a > b) {
            if (a > c) {
                cout << "Alice" << endl;
            }
            else {
                cout << "Charlie" << endl;
            }
        }
        else if (b > c) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}
