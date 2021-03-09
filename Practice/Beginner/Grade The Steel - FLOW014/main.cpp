#include <iostream>

using namespace std;

void solve() {
    int hardness, tensile;
    double carbon;

    cin >> hardness >> carbon >> tensile;

    bool h, c, t;

    h = hardness > 50;
    c = carbon < 0.7;
    t = tensile > 5600;

    if (h && c && t) {
        cout << 10;
    }
    else if (h && c) {
        cout << 9;
    }
    else if (c && t) {
        cout << 8;
    }
    else if (h && t) {
        cout << 7;
    }
    else if (h || c || t) {
        cout << 6;
    }
    else {
        cout << 5;
    }

    cout << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
