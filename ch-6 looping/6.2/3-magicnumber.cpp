#include <iostream>
using namespace std;

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check magic number
bool isMagic(int num) {
    int sum = num;
    while (sum > 9) {
        sum = sumOfDigits(sum);
    }
    return (sum == 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isMagic(number))
        cout << number << " is a Magic Number." << endl;
    else
        cout << number << " is NOT a Magic Number." << endl;

    return 0;
}
