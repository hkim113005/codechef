#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3);

    cout << a[1] << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
