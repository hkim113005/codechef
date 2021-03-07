#include <iostream>

using namespace std;

int main() {
    int x, H, N;

    cin >> N >> H >> x;

    for (int i = 0; i < N; i++) {
        int t;

        cin >> t;

        if (t + x >= H) {
            cout << "YES";

            return 0;
        }
    }

    cout << "NO";

    return 0;
}
