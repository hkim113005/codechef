#include <iostream>

using namespace std;

void solve() {
    int N;

    cin >> N;

    long long dif = 0;

    for (int i = 0; i < N; i++) {
        int t;

        cin >> t;

        dif += (i + 1) - t;
    }

    if (dif <= 0) {
        cout << "Second" << endl;
    }
    else if (dif % 2 == 0) {
        cout << "Second" << endl;
    }
    else if (dif % 2 == 1) {
        cout << "First" << endl;
    }
}

int main() {
    int T;

    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}
