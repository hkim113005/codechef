#include <iostream>
using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int A, B;

        cin >> A >> B;

        int sum = A + B;

        int ans = 0;

        while (sum != 0) {
            int cur = sum % 10;

            if (cur == 0) {
                ans += 6;
            }
            else if (cur == 1) {
                ans += 2;
            }
            else if (cur == 2) {
                ans += 5;
            }
            else if (cur == 3) {
                ans += 5;
            }
            else if (cur == 4) {
                ans += 4;
            }
            else if (cur == 5) {
                ans += 5;
            }
            else if (cur == 6) {
                ans += 6;
            }
            else if (cur == 7) {
                ans += 3;
            }
            else if (cur == 8) {
                ans += 7;
            }
            else if (cur == 9) {
                ans += 6;
            }

            sum /= 10;
        }

        cout << ans << endl;
    }

    return 0;
}
