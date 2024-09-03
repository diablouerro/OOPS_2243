#include <iostream>
using namespace std;

class Car
{
private:
    int price;
public:
    int model;
    Car() {
        cout << "constructor called" << endl;
    }
};


int main() {
    Car c1;
    return 0;
}