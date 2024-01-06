#include <iostream>
using namespace std;

int listSize = 10;

void clear() {
    listSize = 0;
}

void update(int pos, int item, int data[]) {
    data[pos] = item;
}

int getValue(int pos, int data[]) {
    return data[pos];
}

void insert(int pos, int item, int data[]) {
    for (int i=listSize; i>pos; i--) {
        data[i] = data[i-1];
    }
    data[pos] = item;
    listSize++;
}

void remove(int pos, int data[]) {
    for (int i=pos; i<listSize-1; i++) {
        data[i] = data[i+1];
    }
    listSize--;
}

int main() {
    int data[listSize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    update(0, 11, data);
    cout << "after update(): ";
    for (int i = 0; i < listSize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    insert(5, 12, data);
    cout << "after insert(): ";
    for (int i = 0; i < listSize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    remove(1, data);
    cout << "after remove(): ";
    for (int i = 0; i < listSize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "after getValue(): " << getValue(6, data) << endl;

    clear();
    cout << "after clear(): ";
    for (int i = 0; i < listSize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

}