#include <iostream>
using namespace std;
#include <vector>

int main()
{
    // first syntax
    vector<int> v1;

    //second syntax
    vector<int> v2(5, 22);

    //third syntax
    vector<int> v3{1, 2, 3, 4, 5};

    cout << v3[0] << endl;
    cout << v3[1] << endl;
    cout << v3[2] << endl;
    cout << v3[3] << endl;
    cout << v3[4] << endl;

    return 0;
}