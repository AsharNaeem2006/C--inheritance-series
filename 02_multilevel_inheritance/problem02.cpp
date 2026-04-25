#include<iostream>
#include<string>
using namespace std;
class Account {
    private :
    int balance;
    public:
    Account(int b)
    {
        if(b<0)
        {
            cout << "Warning balnce is less then 0\n";
            balance=0;
            return ;
        }
        balance=b;
    }
    ~Account()
    {
        cout << "Account destructor \n";
    }
    void withdraw(int amount)
    {
        if(balance<amount)
        {
            cout << "Balance is low \n";
            return;
        }
        balance-=amount;
        cout << "Your amount is successfully withdrawn\n";
        cout << "Remaining balance is : "<< balance<<"\n";
    }
};
class Saving_Account:public Account
{
    private:
    int interest_rate;
    public:
    Saving_Account(int bal,int interest):Account(bal),interest_rate(interest)
    {
        cout << "Saving Account : intialize interest rate.\n";
    }
    ~Saving_Account()
    {
        cout << "Saving Account destructor\n";
    }

};
int main(){
    Saving_Account Acc(-5000,89);
    Acc.withdraw(300);
    return 0;
}