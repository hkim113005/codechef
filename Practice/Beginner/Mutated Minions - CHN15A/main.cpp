#include <iostream>
using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int N, K;

        cin >> N >> K;

        int ans = 0;

        for (int i = 0; i < N; i++) {
            int t;

            cin >> t;

            if ((t + K) % 7 == 0) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
