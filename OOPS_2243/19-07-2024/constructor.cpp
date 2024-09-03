#include <iostream>
using namespace std;

class A {
    public:
    int x;
    int* p;
    // default constructor
    A() {
        x = 5;
        p = new int(10); // Allocates the new memory for an integer
    }
    /*
    
    */
};

int main() {
    A obj1;
    A obj2(obj1);
    obj2.x = 2;
    cout << "obj1.x=" << obj1.x << endl;
    cout << "obj1.p=" << (obj1.p) << endl;
    cout << "obj2.x=" << obj2.x << endl;
    cout << "obj2.p=" << *(obj2.p) << endl;
    return 0;
}