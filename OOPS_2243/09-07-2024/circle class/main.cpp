#include <iostream>
using namespace std;

class circle
{
private:
    float radius;
public:
    void set_radius(float r) {
        radius = r;
    }
    float get_area() {
        return 3.1418 * radius * radius;
    }
};


int main() {
    circle c1;
    c1.set_radius(3);
    cout << "The area of the circle is" << c1.get_area() << endl;
    return 0;
}