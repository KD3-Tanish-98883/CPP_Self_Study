#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    int balance;
    string accountHolderName;
    int depositMoney;
    int withdrawMoney;

    public:
    BankAccount(): accountNumber(0), balance(0), accountHolderName("")
    {   }

    int deposit(int depositMoney){
        balance += depositMoney; 
    }

    int withdraw(int withdrawMoney){
        //balance -= withdrawMoney;
        if (withdrawMoney <= balance)
        {
            balance -= withdrawMoney;
            cout << "Amount withdrawn: " << withdrawMoney << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayBalance(){
        cout << "Current Balance: " << balance << endl;
    }

};

int main(){
    int depositMoney;
    int withdrawMoney;


    BankAccount b;
    b.deposit(5000);
    b.displayBalance();

    b.withdraw(2000);
    b.displayBalance();
}