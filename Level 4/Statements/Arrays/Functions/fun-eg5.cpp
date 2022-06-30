#include<iostream>
using namespace std;
bool checkLogin(string email, string pass) {

    return (email == "jk@gmail.com" && pass == "123") ? true : false;
}

int main() {
    string u_email, pass;
    cout<<"Enter email: ";
    cin>>u_email;
    cout<<"Enter password: ";
    cin>>pass;

    bool result = checkLogin(u_email, pass);
    if (result)
        cout<<"Login success";
    else 
        cout<<"Login fail";
    return 0;
}