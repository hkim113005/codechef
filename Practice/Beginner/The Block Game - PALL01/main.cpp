#include <iostream>

using namespace std;

void solve() {
    string N;

    cin >> N;

    for (int i = 0; i < N.length() / 2; i++) {
        if (N[i] != N[N.length() - i - 1]) {
            cout << "loses" << endl;

            return;
        }
    }

    cout << "wins" << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
