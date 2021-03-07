#include <iostream>

using namespace std;

void solve() {
    int N;

    cin >> N;

    if (N < 10) {
        cout << "Thanks for helping Chef!" << endl;
    }
    else {
        cout << -1 << endl;
    }
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
