#include <iostream>
using namespace std;

template <typename T>
T addition(T a, T b)
{
    return a + b;
}

template <typename T>
T input(T n)
{
    cin >> n;

    return n;
}

// multipale template
template <typename T1, typename T2, typename T3>
void demo(T1 a, T2 b, T3 c)
{
    cout << "A\t : " << a << endl;
    cout << "B\t : " << b << endl;
    cout << "C\t : " << c << endl;
}
int main()
{
    // addition<int>(7, 3)
    cout << addition<int>(7, 3) << endl;

    // addition<double>(20.25, 30.25)
    cout << addition<double>(20.25, 30.25);

    cout << endl << endl;

    int a;
    float PI;
    char ch;

    cout << "Enter any number : ";
    a = input(a);

    cout << "Enter PI value : ";
    PI = input(PI);

    cout << "Enter character value : ";
    ch = input(ch);

    cout << a << endl
        << PI << endl
        << ch << endl << endl;

    demo<int, double, char>(10, 3.14, 'P');

    return 0;
}