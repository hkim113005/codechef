#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        int ans = 0;

        while (N != 0) {
            int i = sqrt(N);

            N -= i * i;

            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
