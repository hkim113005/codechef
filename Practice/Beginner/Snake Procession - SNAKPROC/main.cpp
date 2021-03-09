#include <iostream>

using namespace std;

void solve() {
    int N;
    string s;

    cin >> N >> s;

    int H, T;

    H = T = 0;

    for (int i = 0; i < N; i++) {
        if (s[i] == 'H') {
            H++;
        }
        else if (s[i] == 'T') {
            T++;
        }

        if (T > H || H - T == 2) {
            cout << "Invalid" << endl;

            return;
        }
    }

    if (H != T) {
        cout << "Invalid" << endl;

        return;
    }

    cout << "Valid" << endl;
}

int main() {
    int R;

    cin >> R;

    while (R--) {
        solve();
    }

    return 0;
}
