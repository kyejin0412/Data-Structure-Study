#include <iostream>

using namespace std;

int main() {
    int pocketNum, putNum;
    cin >> pocketNum >> putNum;

    int pocket[pocketNum] = {0,};

    for (int l = 0; l < putNum; l++) {
        int i, j, k;
        cin >> i >> j >> k;

        for (int a = i-1; a < j; a++) {
            pocket[a] = k; 
        }
    }

    for (int l = 0; l < pocketNum; l++) {
        cout << pocket[l] << " ";
    }

    return 0;
}