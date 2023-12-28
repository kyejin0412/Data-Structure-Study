#include <iostream>

using namespace std;

int main() {
    int pocketNum, changeNum;
    cin >> pocketNum >> changeNum;

    int pocket[pocketNum];
    for (int i = 1; i <= pocketNum; i++) {
        pocket[i-1] = i;
    }
    
    for (int l = 0; l < changeNum; l++) {
        int i, j;
        cin >> i >> j;

        int temp = pocket[i-1];
        pocket[i-1] = pocket[j-1];
        pocket[j-1] = temp;
    }

    for (int l = 0; l < pocketNum; l++) {
        cout << pocket[l] << " ";
    }

    return 0;
}