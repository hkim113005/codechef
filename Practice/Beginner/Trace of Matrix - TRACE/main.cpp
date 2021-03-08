#include <iostream>

using namespace std;

int N;
int matrix[105][105];

int trace(int x, int y, int n) {
    if (x >= N || y >= N) {
        return n;
    }

    return trace(x + 1, y + 1, n + matrix[x][y]);
}

void solve() {
    int ans = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        ans = max(ans, trace(i, 0, 0));
    }

    for (int j = 1; j < N; j++) {
        ans = max(ans, trace(0, j, 0));
    }

    cout << ans << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
