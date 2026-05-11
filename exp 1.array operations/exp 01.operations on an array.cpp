#include <iostream>
using namespace std;

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    int i, pos, value, key;

    // 1 Traversal
    cout << "Traversal of array:" << endl;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // 2 Insertion
    pos = 2;        
    value = 25;    

    for (i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;

    cout << "After insertion:" << endl;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // 3 Deletion
    pos = 3;   

    for (i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    cout << "After deletion:" << endl;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // 4 Searching (Linear Search)
    key = 40;
    int found = 0;

    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            found = 1;
            cout << "Element " << key << " found at index " << i << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element not found" << endl;
    }
    cout << endl;

    // 5 Updating
    pos = 1;
    value = 99;
    arr[pos] = value;

    cout << "After updating:" << endl;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
//merging
    int a[3] = {10, 20, 30};
    int b[2] = {40, 50};
    int c[5];

    for (i = 0; i < 3; i++) {
        c[i] = a[i];
    }

    for (i = 0; i < 2; i++) {
        c[3 + i] = b[i];
    }

    cout << "Merged array:" << endl;
    for (i = 0; i < 5; i++) {
        cout << c[i] << " ";
    }

    return 0;
}

    



