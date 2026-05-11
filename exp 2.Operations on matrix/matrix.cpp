#include <iostream>
using namespace std;

int main() {

    int A[2][2], B[2][2], result[2][2];
    int choice;

    cout << "Enter elements of First 2x2 Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Second 2x2 Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    while(true) {

        cout << "\n--- 2x2 MATRIX OPERATIONS ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose of First Matrix\n";
        cout << "5. Display Matrices\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:

                cout << "\nAddition Result:\n";

                for(int i = 0; i < 2; i++) {
                    for(int j = 0; j < 2; j++) {

                        result[i][j] = A[i][j] + B[i][j];

                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }

                break;

            case 2:

                cout << "\nSubtraction Result:\n";

                for(int i = 0; i < 2; i++) {
                    for(int j = 0; j < 2; j++) {

                        result[i][j] = A[i][j] - B[i][j];

                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }

                break;

            case 3:

                for(int i = 0; i < 2; i++) {
                    for(int j = 0; j < 2; j++) {

                        result[i][j] = 0;

                        for(int k = 0; k < 2; k++) {
                            result[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }

                cout << "\nMultiplication Result:\n";

                for(int i = 0; i < 2; i++) {
                    for(int j = 0; j < 2; j++) {

                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }

                break;

            case 4:

                cout << "\nTranspose of First Matrix:\n";

                for(int i = 0; i < 2; i++) {
                    for(int j = 0; j < 2; j++) {

                        cout << A[j][i] << " ";
                    }
                    cout << endl;
                }

                break;

            case 5:

                cout << "\nFirst Matrix:\n";

                for(int i = 0; i < 2; i++) {
                    for(int j = 0; j < 2; j++) {

                        cout << A[i][j] << " ";
                    }
                    cout << endl;
                }

                cout << "\nSecond Matrix:\n";

                for(int i = 0; i < 2; i++) {
                    for(int j = 0; j < 2; j++) {

                        cout << B[i][j] << " ";
                    }
                    cout << endl;
                }

                break;

            case 6:

                cout << "Program Ended\n";
                return 0;

            default:

                cout << "Invalid Choice\n";
        }
    }

    return 0;
}
