#include <iostream>

using namespace std;

int main() {
    int array[8];

    for (int i = 0; i < 8; i++) {
        cin >> array[i];
    }

    bool isAsc = true;
    bool isDes = true;

    for (int i = 1; i < 8; i++) {
        if (array[i-1] <= array[i]) {
            isDes = false;
        }
        if (array[i-1] >= array[i]) {
            isAsc = false;
        }
    }

    if (isAsc) cout << "ascending" << endl;
    else if (isDes) cout << "descending" << endl;
    else cout << "mixed" << endl;

    return 0;
}