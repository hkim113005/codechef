#include <iostream>

using namespace std;

void solve() {
    int N, M, X, Y;

    cin >> N >> M >> X >> Y;

    int A[50000], B[50000], C[50000], D[50000];

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    if (X == Y) {
        cout << 0 << endl;

        return;
    }

    int n = 0;

    int a, b;

    a = X;
    b = X;

    for (int h = 0; h < N; h++) {
        int c, d;

        c = -1;
        d = -1;

        bool stop = true;

        for (int i = 0; i < M; i++) {
            if ((a <= A[i] && A[i] <= b) || (a <= B[i] && B[i] <= b)) {
                stop = false;

                if (c == -1 || c > C[i]) {
                    c = C[i];
                }

                if (d == -1 || d < D[i]) {
                    d = D[i];
                }
            }
        }

        if (stop) {
            cout << -1 << endl;

            return;
        }

        n++;

        a = c;
        b = d;

        if (a <= Y && Y <= b) {
            cout << n << endl;

            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
