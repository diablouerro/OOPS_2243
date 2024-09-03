#include <iostream>
using namespace std;

class student
{
private:
    /* data */
    int marks;
    int roll;
public:
    student() {
        cout << "hello" << endl;
    };
};


int main() {
    student s1;
    return 0;
}