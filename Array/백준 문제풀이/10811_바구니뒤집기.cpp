#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int pocketNum, reverseNum;
    cin >> pocketNum >> reverseNum;

    int pocket[pocketNum];
    for (int i = 1; i <= pocketNum; i++) {
        pocket[i-1] = i;
    }
    
    for (int l = 0; l < reverseNum; l++) {
        int i, j;
        cin >> i >> j;

        reverse(pocket + i-1, pocket + j);
    }

    for (int l = 0; l < pocketNum; l++) {
        cout << pocket[l] << " ";
    }

    return 0;
}