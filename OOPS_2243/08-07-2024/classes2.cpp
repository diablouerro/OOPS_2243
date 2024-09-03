#include <iostream>
using namespace std;

class BankAccount
{
private:
    int bankBalance;
    int AccountNo;
public:
   void depositMoney(int n) {
    bankBalance += n;
   }
   int withdrawMoney(int n) {
    bankBalance -= n;
   }
};

int main() {
    BankAccount b1;
    b1.depositMoney(3000);
    b1.withdrawMoney(1500);
    return 0;
}