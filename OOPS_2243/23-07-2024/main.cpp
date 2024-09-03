#include <iostream>
using namespace std;

class A {
    int x;
    public:
    A(int a) {
        x = a;
        cout << "Constructor" << endl;
    }
    ~A() {
        cout <<"Destructor" << endl;
    }
}
int main() {
    A obj1;
    return 0;
}