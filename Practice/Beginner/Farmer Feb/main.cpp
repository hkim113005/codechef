#include <iostream>
#include <math.h>

using namespace std;

bool prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

void solve() {
    int a, b;

    cin >> a >> b;

    int c = 1;

    while (!prime(a + b + c)) {
        c++;
    }

    cout << c << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
