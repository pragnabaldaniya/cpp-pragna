#include <iostream>
using namespace std;

int main() {
    int a, b, c, max;

    cout << "Enter any numbers: ";
    cin >> a;
    
    cout << "Enter any numbers: ";
    cin >> b;
    
    cout << "Enter any numbers: ";
    cin >> c;

    max = (a > b)
         ? ((a > c) ? a : c) 
         : ((b > c) ? b : c);

    cout << "The maximum number is: " << max << endl;

    
}
