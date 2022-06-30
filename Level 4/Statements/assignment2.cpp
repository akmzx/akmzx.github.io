#include<iostream>
using namespace std;

int main() {

    int total_day;
    int year;
    int month;
    int day;

    cout<<"Enter no. of days: ";
    cin>>total_day;

    year = total_day/365;
    month = (total_day%365)/30;
    day = (total_day%365)%30;

    cout<<"Years: "<<year;
    cout<<"\nMonths: "<<month;
    cout<<"\nDays: "<<day;

    return 0;
}