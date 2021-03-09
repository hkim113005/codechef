#include <iostream>

using namespace std;

int main() {
    int T;

    cin >> T;

    while (T--) {
        char id;

        cin >> id;

        if (id == 'B' || id == 'b') {
            cout << "BattleShip";
        }
        else if (id == 'C' || id == 'c') {
            cout << "Cruiser";
        }
        else if (id == 'D' || id == 'd') {
            cout << "Destroyer";
        }
        else if (id == 'F' || id == 'f') {
            cout << "Frigate";
        }

        cout << endl;
    }

    return 0;
}
