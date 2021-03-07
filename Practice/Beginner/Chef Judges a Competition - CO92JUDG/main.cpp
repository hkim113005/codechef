#include <iostream>
using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int N;
        int max_a, max_b;
        int sum_a, sum_b;

        sum_a = sum_b = 0;
        max_a = max_b = 0;

        cin >> N;

        for (int i = 0; i < N; i++) {
            int t;

            cin >> t;

            sum_a += t;
            max_a = max(t, max_a);
        }

        for (int i = 0; i < N; i++) {
            int t;

            cin >> t;

            sum_b += t;
            max_b = max(t, max_b);
        }

        if (sum_a - max_a < sum_b - max_b) {
            cout << "Alice" << endl;
        }
        else if (sum_a - max_a > sum_b - max_b) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Draw" << endl;
        }
    }

    return 0;
}
