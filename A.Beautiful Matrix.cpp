#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int num;
    int iPos, jPos;
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                iPos = i;
                jPos = j;
            }
        }
    }
    cout << abs(2 - iPos) + abs(2 - jPos);
}

