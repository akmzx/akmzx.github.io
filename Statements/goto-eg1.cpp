#include<iostream>
using namespace std;
int main() {
    string uname,upass;

    user_input:
    cout<<"Enter user name: ";
    cin>>uname;
    cout<<"Enter user password: ";
    cin>>upass;

    if(uname != "mmit" || upass != "123") {
        goto user_input;
    }
    cout<<"\nLogin Success.....";
    return 0;
}