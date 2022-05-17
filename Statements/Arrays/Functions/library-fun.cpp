#include<iostream>
#include<cctype>
#include<cmath>
#include<iomanip>

using namespace std;
int main() {
    cout<<"\n____ cctype library function ____\n";
    cout<<"(9 is alpha?): "<<isalpha('9');
    cout<<"\n(A is alpha?): "<<isalpha('A');
    cout<<"\n(9 is digit?): "<<isdigit('9');
    cout<<"\nLowercase of 'A': "<<(char)tolower('A');

    cout<<"\n____ cmath library function ____\n";
    cout<<"3 power 5: "<<pow(3,5);
    cout<<"\nsqrt of 36: "<<sqrt(36);
    cout<<"\nValue of sin(30): "<<sin(30);
    cout<<"\nValue of log(10): "<<log(10);

    cout<<"\n____ iomanip library function ____\n";
    cout<<"Spring"<<setw(20)<<"Day";
    cout<<"\nLove"<<setw(20)<<"Yourself";

    return 0;
}