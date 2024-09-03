#include <iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex operator+ (Complex c, Complex c2) {
        cout << "inside" << real << endl;
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.real = 1;
    c1.img = 2;
    c2.real = 2;
    c2.img = 5;
    c3 = c1 + c2;
    cout << c1.real << " " << c1.img << endl;  
    cout << c2.real << " " << c2.img << endl;  
    cout << c3.real << " " << c3.img << endl;  
    return 0;
}