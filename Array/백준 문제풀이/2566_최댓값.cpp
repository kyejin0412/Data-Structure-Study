#include <iostream>

using namespace std;

int main() {
    int array[9][9];
    int max = 0;
    int max_row, max_col;

    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            cin >> array[row][col];
            if (array[row][col] >= max) {
                max = array[row][col];
                max_row = row;
                max_col = col;
            }
        }
    }

    cout << max << endl;
    cout << max_row+1 << " " << max_col+1 << endl;

    return 0;
}