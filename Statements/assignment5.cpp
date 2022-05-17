#include<iostream>
using namespace std;
int main() {
    string uName,uPass;

    cout<<"Enter user name: ";
    cin>>uName;
    cout<<"Enter password: ";
    cin>>uPass;

    if (uName != "mmit" && uPass != "admin123") {
        cout<<"username and password do not match";
    }
    else if (uName == "mmit" && uPass != "admin123") {
        cout<<"password is incorrect";
    }
    else if (uName != "mmit" && uPass == "admin123") {
        cout<<"username is incorrect";
    }
    else {
        cout<<"login success";
    }
    return 0;
}