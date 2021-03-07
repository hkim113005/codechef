#include <iostream>
using namespace std;

void solve() {
    int N;

    cin >> N;

    bool b[7];

    for (int i = 0; i < 7; i++) {
        b[i] = false;
    }

    for (int i = 0; i < N; i++) {
        string s;

        cin >> s;

        if (s == "cakewalk") {
            b[0] = true;
        }
        else if (s == "simple") {
            b[1] = true;
        }
        else if (s == "easy") {
            b[2] = true;
        }
        else if (s == "easy-medium") {
            b[3] = true;
        }
        else if (s == "medium") {
            b[4] = true;
        }
        else if (s == "medium-hard") {
            b[5] = true;
        }
        else if (s == "hard") {
            b[6] = true;
        }
    }

    if (b[0] && b[1] && b[2] && (b[3] || b[4]) && (b[5] || b[6])) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
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
