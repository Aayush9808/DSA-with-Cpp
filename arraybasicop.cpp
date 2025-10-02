#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int arr[], int &size, int index, int value) {
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    size++;
}

void access(int arr[], int size, int index) {
    cout << "Element at index " << index << " = " << arr[index] << endl;
}

void search(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            cout << "Element " << value << " found at index " << i << endl;
            return;
        }
    }
    cout << "Element " << value << " not found!" << endl;
}

void del(int arr[], int &size, int index) {
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    int arr[100];
    int size = 0;

    insert(arr, size, 0, 10);
    insert(arr, size, 1, 20);
    insert(arr, size, 2, 30);
    insert(arr, size, 3, 40);

    cout << "Array after insertions: ";
    print(arr, size);

    access(arr, size, 2);

    search(arr, size, 30);
    search(arr, size, 99);

    del(arr, size, 1);
    cout << "Array after deleting index 1: ";
    print(arr, size);

    return 0;
}

// OUTPUT:-
// Array after insertions: 10 20 30 40.
// Element at index 2 = 30
// Element 30 found at index 2
// Element 99 not found!
// Array after deleting index 1: 10 30 40
