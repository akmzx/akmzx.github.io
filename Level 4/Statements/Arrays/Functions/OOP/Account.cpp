#include<iostream>
using namespace std;
class Account {
    // data
    public: 
        string account_holder;
        string account_no;
        int balance;
    // functions
    void createAccount(string holder, string no, int initAmt = 1000) {
        account_holder = holder;
        account_no = no;
        balance = initAmt;
    }
    void deposit (int amount) {
        balance = balance + amount;
    }
    bool withdraw (int withdraw_amt) {
        if (balance < withdraw_amt)
            return false;
        else {
            balance = balance - withdraw_amt;
            return true;
        }
    }
    void showData() {
        cout<<"\n______ Current Info _______\n\n";
        cout<<"Holder: "<<account_holder;
        cout<<"\nNo: "<<account_no;
        cout<<"\nCurrent Balance: "<<balance<<" ks.";
    }
};

int main() {
    Account acc1 = Account();
    acc1.createAccount("Jeon", "123456789", 200000);
    acc1.showData();
    acc1.deposit(300000);
    cout<<"\n____ After deposit(300000)____\n";
    cout<<"Current Balance: "<<acc1.balance<<"ks.";
    
    bool result = acc1.withdraw(6000000);
    cout<<"\n_____Withdraw (600000ks)____";
    if (result == 0) {
        cout<<"Sorry, not enough!";
        cout<<"\nCurrent Balance: "<<acc1.balance<<"ks.";
    }
    else {
        cout<<"\n____ withdraw success _____\n";
        cout<<"Current balance: "<<acc1.balance<<"ks.";
    }

    result = acc1.withdraw(300000);
    cout<<"\n_____Withdraw (300000ks)____";
    if (result == 0) {
        cout<<"Sorry, not enough!";
        cout<<"\nCurrent Balance: "<<acc1.balance<<"ks.";
    }
    else {
        cout<<"\n____ withdraw success _____\n";
        cout<<"Current balance: "<<acc1.balance<<"ks.";
    }
    return 0;
}