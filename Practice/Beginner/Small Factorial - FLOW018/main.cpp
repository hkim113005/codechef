#include <iostream>
using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        int ans = 1;

        for (int i = 2; i <= N; i++) {
            ans *= i;
        }

        cout << ans << endl;
    }

    return 0;
}
