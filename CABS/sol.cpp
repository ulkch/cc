#include <iostream>


using namespace std;

int main__() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, a, b = 0;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        if (a < b) {
            cout << "FIRST" << endl;
        }
        else if (a > b) {
            cout << "SECOND" << endl;
        }
        else {
            cout << "ANY" << endl;
        }
    }

    return 0;
}