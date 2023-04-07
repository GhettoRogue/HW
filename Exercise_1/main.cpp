#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int source[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    const int SIZE_1 = 5;
    int destination_1[SIZE_1];
    const int SIZE_2 = 5;
    int destination_2[SIZE_2];


    for (int i = 0, j = 0; i < SIZE_1; ++i, j++) {
        destination_1[i] = source[j];
    }
    for (int i = 0, j = SIZE_1; i < SIZE_2; ++i, j++) {
        destination_2[i] = source[j];
    }
    for (int i = 0; i < SIZE_1; ++i) {
        cout << destination_1[i] << " " << endl;
    }
    cout << endl;
    for (int i = 0; i < SIZE_2; ++i) {
        cout << destination_2[i] << " " << endl;
    }
    cout << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << source[i] << " " << endl;
    }
    cout << endl;

    return 0;
}
