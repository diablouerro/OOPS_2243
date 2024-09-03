#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 10; i++) {
        cout << "Hello" << endl;
    }
    int i  = 0;
    while(i++<10){
        cout<<"Hello world"<<endl;
    }
    do{
        cout<<"Hello world"<<endl;
        i++;
    }
    while(i<10);
    return 0;
}