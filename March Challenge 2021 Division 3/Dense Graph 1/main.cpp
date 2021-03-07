#include <iostream>

using namespace std;

int N, M, X, Y, A[200005], B[200005], C[200005], D[200005], ans;
bool E[200005];

void dfs(int a, int b, int n) {
    if (a <= Y && Y <= b) {
        ans = n;

        return;
    }

    for (int i = 0; i < M; i++) {
        if ((a <= A[i] && A[i] <= b) || (a <= B[i] && B[i] <= b)) {
            if (!E[i] ) {
                E[i] = true;

                dfs(C[i], D[i], n + 1);
            }
        }
    }
}

void solve() {
    cin >> N >> M >> X >> Y;

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    ans = -1;

    dfs(X, X, 0);

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
