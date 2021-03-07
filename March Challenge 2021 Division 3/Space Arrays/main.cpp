#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long T;

    cin >> T;

    while (T--) {
        long long N;

        cin >> N;

        long long a[200005];

        long long dif = 0;

        for (long long i = 0; i < N; i++) {
            cin >> a[i];
        }

        sort(a, a + N);

        bool b = false;

        for (long long i = 0; i < N; i++) {
            if ((i + 1) - a[i] < 0) {
                cout << "Second" << endl;

                b = true;
                break;
            }
            dif += ((i + 1) - a[i]);
        }

        if (b) {
            continue;
        }

        if (dif % 2 == 0) {
            cout << "Second" << endl;
        }
        else {
            cout << "First" << endl;
        }
    }
}
