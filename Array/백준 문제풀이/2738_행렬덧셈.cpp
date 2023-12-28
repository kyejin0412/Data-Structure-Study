#include <iostream>

using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int array1[row][col];
    int array2[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> array1[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> array2[i][j];
        }
    }

    int result[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
            cout << result[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}