#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"If you entered 'q', program will terminate...\n";

    do 
    {
        cout<<"\nEnter a single character: ";
        cin>>ch;

        if (ch >= '0' && ch <= '9') {
            cout<<ch<<" is digit";
        }
        else {
            cout<<ch<<" is not digit";
        }
    } while (ch != 'q');

    return 0;
}