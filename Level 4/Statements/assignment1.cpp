#include<iostream>
using namespace std;

int main() {

    int loan;
    float rate;
    int month;
    float monthly_int;
    int total_int;
    int c;


    cout<<"Enter loan amount: ";
    cin>>loan;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter number of months: ";
    cin>>month;

    monthly_int = loan/rate;
    total_int = monthly_int * month;

    cout<<"Monthly interest: "<<monthly_int;
    cout<<"\nYour interest is: "<<total_int;

    return 0;
}