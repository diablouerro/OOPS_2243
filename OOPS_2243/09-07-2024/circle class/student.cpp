#include <iostream>
using namespace std;

class student
{
private:
    int age;
    int roll_number;
public:
    int model;
    student() {
        cout << "constructor called from student class" << endl;
    }
};

int main() {
    student s1;
    return 0;
}