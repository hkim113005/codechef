#include <iostream>

using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        while (N != 0) {
            if (N % 10 != 0) {
                cout << N % 10;
            }

            N /= 10;
        }

        cout << endl;
    }

    return 0;
}
