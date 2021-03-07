#include <iostream>

using namespace std;

int N, E, H, A, B, C;
long long ans = -1;

void dfs(long long n, long long e, long long h, long long p) {
    if (n == N) {
        if (ans == -1 || ans > p) {
            ans = p;
        }

        return;
    }

    if (e - 2 >= 0) {
        dfs(n + 1, e - 2, h, p + A);
    }

    if (h - 3 >= 0) {
        dfs(n + 1, e, h - 3, p + B);
    }

    if (e - 1 >= 0 && h - 1 >= 0) {
        dfs(n + 1, e - 1, h - 1, p + C);
    }
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        cin >> N >> E >> H >> A >> B >> C;

        dfs(0, E, H, 0);

        cout << ans << endl;
    }
    return 0;
}
