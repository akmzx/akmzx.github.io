#include<iostream>
using namespace std;
int main() {

    int num;
    cout<<"if you entered zero, program will terminate----\n";
    do 
    {
        cout<<"\nEnter a number: ";
        cin>>num;
        if (num < 0) {
            cout<<num<<" is negative number";
        }
        else if(num > 0) {
            cout<<num<<" is positive number";
        }
    } while (num != 0);
    return 0;
}