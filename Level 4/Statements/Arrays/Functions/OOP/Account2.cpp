#include<iostream>
using namespace std;
class Account {
    // data
    private: 
        string account_holder;
        string account_no;
        int balance;
    // methods
    public: // constructor
        Account(string holder, string no, int amt) {
            this->account_holder = holder;
            this->account_no = no;
            this->balance = amt;
        }
        Account() {

        }
        void initializeData(string holder, string no, int amt) {
            this->account_holder = holder;
            this->account_no = no;
            this->balance = amt;
        }
        void showData() {
            cout<<"\n------ Account Info ------\n\n";
            cout<<"Name: "<<this->account_holder;
            cout<<"\nNumber: "<<this->account_no;
            cout<<"\nCurrent Balance: "<<this->balance<<" ks";
        }
};
    /*
    class Student {
        private: 
            int rno;
            string name;
        public:
            Student(int rno) {
                this->rno = rno;
            }
        public: void showData() {
            cout<<"Rno: "<<rno;
        }
    }
    */
int main() {
    // student s1 = student();
    Account acc1 = Account(); // ysing 0 arg constructor (default)
    acc1.initializeData("Jeon", "12345678", 500000);
    acc1.showData();

    cout<<"\n----- Another Account ------\n\n";
    Account acc2 = Account("JK", "87654321", 600000); // using 3 args constructor
    acc2.showData();
    return 0;
}