#include <iostream>
using namespace std;

class rectange
{
private:
    int length;
    int breadth;
public:
    void set_length(int l) {
        length = l;
    }
    void set_bredth(int b) {
        breadth = b;
    }
    int get_length() {
        return length;
    }
    int get_breadth() {
        return breadth;
    }

};



int main() {
    rectange r1;
    r1.set_length(100);
    r1.set_bredth(100);
    cout << "The length of rectange is: " << r1.get_length();
    cout << "The breadth of rectange is: " << r1.get_breadth();
    return 0;
}