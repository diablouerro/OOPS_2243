#include <iostream>
using namespace std;

class Point {
    private:
    int x, y;
    public:
    Point();
};

Point::Point() {
    cout << "Hello";
}

int main() {
    Point p1;
    return 0;
}