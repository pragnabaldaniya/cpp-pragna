#include <iostream>
using namespace std;

// Function to input a single integer
int inputInt() {
    int n;
    cin >> n;
    return n;
}

// Function to input elements into an array
void arrayInput(int size, int array[]) {
    for (int i = 0; i < size; i++) {
        cout << "Enter a[" << i << "]: ";
        array[i] = inputInt();
    }
}

// Function to output elements of the array
void arrayOutput(int size, int array[]) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;
}

// Function to calculate sum of array elements
int elementSum(int size, int array[]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int size;

    cout << "Enter number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    int array[size]; // VLA: Works on most compilers like GCC, but not standard C++

    arrayInput(size, array);
    arrayOutput(size, array);

    int sum = elementSum(size, array);
    cout << "Array element sum: " << sum << endl;

    return 0;
}
 