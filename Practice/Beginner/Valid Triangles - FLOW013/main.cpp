#include <iostream>

using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int a, b, c;

        cin >> a >> b >> c;

        if (a + b + c == 180) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
