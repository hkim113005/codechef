#include <iostream>

using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int N;
        int ans = 0;

        cin >> N;

        while (N != 0) {
            ans += N % 10;
            N /= 10;
        }

        cout << ans << endl;
    }

    return 0;
}
