#include <iostream>
#include <bitset>
#include <math.h>

using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        int c;

        cin >> c;

        string res = bitset<32>(c).to_string();

        long long a, b;
        a = b = 0;

        int n = 0;

        for (int i = 0; i < res.length(); i++) {
            if (res[i] == '1') {
                break;
            }

            n++;
        }

        for (int i = n; i < res.length(); i++) {
            int x = res.length() - 1 - i;

            if (res[i] == '1') {
                if (a <= b) {
                    a += pow(2, x);
                }
                else {
                    b += pow(2, x);
                }
            }
            else {
                a += pow(2, x);
                b += pow(2, x);
            }
        }

        cout << a * b << endl;
    }

    return 0;
}
