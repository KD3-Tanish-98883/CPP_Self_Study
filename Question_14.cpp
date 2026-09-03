#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    int balance;
    string accountHolderName;
    double depositMoney;
    double withdrawMoney;

    public:
    BankAccount(): accountNumber(0), balance(0), accountHolderName("")
    {   }

    void deposit(double amount){
        if (amount < 0){
            throw amount;
        }
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount){
        if (amount < 0){
            throw amount;
        }

        if (amount > balance){
            throw string("Insufficient balance!");
        }
        balance -= amount;
        cout << "Amount withdrawn: " << amount << endl;
    }

    void displayBalance(){
        cout << "Current Balance: " << balance << endl;
    }

};

int main(){
    double depositMoney;
    double withdrawMoney;

    BankAccount b;
    try{
    b.deposit(5000);
    b.displayBalance();

    b.withdraw(2000);
    b.displayBalance();
    }
    catch (double amount){
        cout << "Exception caught: Negative amount = "<< amount << endl;
    }

    catch (string message){
        cout << "Exception caught: "<< message << endl;
    }
}
