#include <iostream>
#include <math.h>

using namespace std;

void solve() {
    double N, V1, V2;

    cin >> N >> V1 >> V2;

    //cout << 2 * N / V2 << " " << sqrt(2) * N / V1 << " : ";

    if (2 * N / V2 > sqrt(2) * N / V1) {
        cout << "Stairs";
    }
    else {
        cout << "Elevator";
    }

    cout << endl;
}

int main() {
    int T;

    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
