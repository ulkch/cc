#include <iostream>


using namespace std;

int main_cpp() {
    int t, x, y = 0;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        x >= y ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}