#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value stored in pointer p: " << p << endl;
    cout << "Value pointed by p: " << *p << endl; // dereferencing
    return 0;
}
