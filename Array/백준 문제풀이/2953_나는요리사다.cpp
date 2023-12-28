#include <iostream>

using namespace std;

int main() {
    int arr[5][4];
    int max = 0;
    int winner = 0;

    for (int i = 0; i < 5; i++) {
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }

        if (sum > max) {
            max = sum;
            winner = i+1;
        }
    }

    cout << winner << " " << max << endl;

    return 0;
}