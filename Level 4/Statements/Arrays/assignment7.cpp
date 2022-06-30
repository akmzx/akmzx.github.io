#include<iostream>
using namespace std;
void calculateInterest(int loan, int rate, int months) {
    int monthly, total;
    monthly = loan * rate/100; 
    cout<<"Monthly Interest: "<<monthly;
    total = monthly * months;
    cout<<"\nTotal Interest: "<<total;
}
int main() {
    int loan_amt, int_rate, no_months;
    cout<<"\nEnter loan amount: ";
    cin>>loan_amt;
    cout<<"Enter interest rate: ";
    cin>>int_rate;
    cout<<"Enter number of months: ";
    cin>>no_months;
    calculateInterest(loan_amt, int_rate, no_months);
    return 0;
}