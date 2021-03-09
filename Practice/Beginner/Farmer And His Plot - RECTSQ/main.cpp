#include <iostream>

using namespace std;

void solve() {
    int N, M;

    cin >> N >> M;

    int a, b, t;

    a = N;
    b = M;

    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }

    cout << (N / a) * (M / a) << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
