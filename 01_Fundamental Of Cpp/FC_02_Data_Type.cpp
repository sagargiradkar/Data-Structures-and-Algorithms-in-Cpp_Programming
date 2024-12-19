#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    cout << a + b << endl;
    cout << "Size of int :: " << sizeof(a) << endl;

    float d = 1.33;
    cout << d << endl;
    cout << "Size of float ::" << sizeof(d) << endl;

    char c = 'A';
    cout << c << endl;
    cout << "Size of char ::" << sizeof(c) << endl;

    bool e = true;
    cout << e << endl;
    cout << "Size of bool ::" << sizeof(e) << endl;

    return 0;
}