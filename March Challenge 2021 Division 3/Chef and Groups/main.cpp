#include <iostream>

using namespace std;

int main() {
    int T;

    cin >> T;

    for (int i = 0; i < T; i++) {
        string s;

        cin >> s;

        int cnt = 0;
        bool prev = s[0] - '0';

        for (int j = 1; j < s.length(); j++) {
            if (prev && !(s[j] - '0') {
                cnt++;
            }

            prev = s[j] - '0';
        }

        if (prev && !s[s.length() - 1] - '0') {
            cnt++;
        }

        cout << cnt;
    }

    return 0;
}
