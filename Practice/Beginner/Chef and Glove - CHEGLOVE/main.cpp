#include <iostream>

using namespace std;

void solve() {
    int N;
    int hand[100005];
    int glove[100005];
    bool front = true;
    bool back = true;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> hand[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> glove[i];
    }

    for (int i = 0; i < N; i++) {
        if (hand[i] > glove[i]) {
            front = false;
        }

        if (hand[i] > glove[N - i - 1]) {
            back = false;
        }
    }

    if (front && back) {
        cout << "both";
    }
    else if (front) {
        cout << "front";
    }
    else if (back) {
        cout << "back";
    }
    else {
        cout << "none";
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
