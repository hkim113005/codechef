#include <iostream>

using namespace std;

int main() {
    long long T;

    cin >> T;

    while (T--) {
        long long ans = -1;
        long long N, E, H, A, B, C;

        cin >> N >> E >> H >> A >> B >> C;

        if (N > E && N > H) {
            cout << -1 << endl;

            continue;
        }

        long long n, p, e, h;

        n = 0;
        p = 0;
        e = E;
        h = H;

        for (long long i = 0; i < N; i++) {
            if (e - 2 >= 0) {
                n++;
                p += A;

                e -= 2;
            }
            else if (h - 3 >= 0) {
                n++;
                p += B;

                h -= 3;
            }
            else if (e - 1 >= 0 && h - 1 >= 0) {
                n++;
                p += C;

                e--;
                h--;
            }
            else {
                break;
            }
        }

        if (n == N) {
            if (ans == -1 || ans > p) {
                ans = p;
            }
        }

        n = 0;
        p = 0;
        e = E;
        h = H;

        for (long long i = 0; i < N; i++) {
            if (e - 2 >= 0) {
                n++;
                p += A;

                e -= 2;
            }
            else if (e - 1 >= 0 && h - 1 >= 0) {
                n++;
                p += C;

                e--;
                h--;
            }
            else if (h - 3 >= 0) {
                n++;
                p += B;

                h -= 3;
            }
            else {
                break;
            }
        }

        if (n == N) {
            if (ans == -1 || ans > p) {
                ans = p;
            }
        }

        n = 0;
        p = 0;
        e = E;
        h = H;

        for (long long i = 0; i < N; i++) {
            if (h - 3 >= 0) {
                n++;
                p += B;

                h -= 3;
            }
            else if (e - 2 >= 0) {
                n++;
                p += A;

                e -= 2;
            }
            else if (e - 1 >= 0 && h - 1 >= 0) {
                n++;
                p += C;

                e--;
                h--;
            }
            else {
                break;
            }
        }

        if (n == N) {
            if (ans == -1 || ans > p) {
                ans = p;
            }
        }

        n = 0;
        p = 0;
        e = E;
        h = H;

        for (long long i = 0; i < N; i++) {
            if (h - 3 >= 0) {
                n++;
                p += B;

                h -= 3;
            }
            else if (e - 1 >= 0 && h - 1 >= 0) {
                n++;
                p += C;

                e--;
                h--;
            }
            else if (e - 2 >= 0) {
                n++;
                p += A;

                e -= 2;
            }
            else {
                break;
            }
        }

        if (n == N) {
            if (ans == -1 || ans > p) {
                ans = p;
            }
        }

        n = 0;
        p = 0;
        e = E;
        h = H;

        for (long long i = 0; i < N; i++) {
            if (e - 1 >= 0 && h - 1 >= 0) {
                n++;
                p += C;

                e--;
                h--;
            }
            else if (h - 3 >= 0) {
                n++;
                p += B;

                h -= 3;
            }
            else if (e - 2 >= 0) {
                n++;
                p += A;

                e -= 2;
            }
            else {
                break;
            }
        }

        if (n == N) {
            if (ans == -1 || ans > p) {
                ans = p;
            }
        }

        n = 0;
        p = 0;
        e = E;
        h = H;

        for (long long i = 0; i < N; i++) {
            if (e - 1 >= 0 && h - 1 >= 0) {
                n++;
                p += C;

                e--;
                h--;
            }
            else if (e - 2 >= 0) {
                n++;
                p += A;

                e -= 2;
            }
            else if (h - 3 >= 0) {
                n++;
                p += B;

                h -= 3;
            }
            else {
                break;
            }
        }

        if (n == N) {
            if (ans == -1 || ans > p) {
                ans = p;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
