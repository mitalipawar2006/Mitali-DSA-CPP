#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2];
    int sum[2][2], diff[2][2], trans[2][2];
    int mul[2][2], divi[2][2];
    int i, j, k;

    cout << "Enter elements of first matrix (2x2):\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix (2x2):\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    // Matrix Addition
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Matrix Subtraction
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Matrix Multiplication
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            mul[i][j] = 0;
            for (k = 0; k < 2; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Element-wise Division (NOT true matrix division)
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (b[i][j] != 0)
                divi[i][j] = a[i][j] / b[i][j];
            else
                divi[i][j] = 0; // avoid division by zero
        }
    }

    // Transpose of first matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            trans[j][i] = a[i][j];
        }
    }

    cout << "\nMatrix Addition:\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix Subtraction:\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix Multiplication:\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nElement-wise Division:\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << divi[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose of First Matrix:\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
