#include <iostream>
using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        int ans = 0;

        ans += N / 100;
        N %= 100;

        ans += N / 50;
        N %= 50;

        ans += N / 10;
        N %= 10;

        ans += N / 5;
        N %= 5;

        ans += N / 2;
        N %= 2;

        ans += N;

        cout << ans << endl;
    }

    return 0;
}
