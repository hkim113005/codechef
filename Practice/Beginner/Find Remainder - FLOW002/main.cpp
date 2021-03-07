#include <iostream>
using namespace std;

int main() {
    int R;

    cin >> R;

    if (1 <= R && R <= 50) {
        cout << 100 << endl;
    }
    else if (R <= 100) {
        cout << 50 << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}
