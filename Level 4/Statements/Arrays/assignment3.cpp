#include<iostream>
using namespace std;
int main() {
    int i,num,digit,sum = 0;

    cout<<"Enter number: ";
    cin>>num;
    digit = i = num;
    while (digit > 0) {
        digit = i%10;
        sum = digit + sum;
        i = i/10;
    }
    cout<<"\nThe sum of digits of "<<num<<" : "<<sum<<"\n";    
    return 0;
}