#include<iostream>
using namespace std;
int main() {
    int empNo;
    string name;
    string email;
    int salary;

    cout<<"-----User Input-------\n";

    cout<<"Enter employee no: ";
    cin>>empNo; // empNo = 101
    cin.ignore(); // Use this if the next input is not cin

    cout<<"Enter name: ";
    // cin>>name; // name = "susu"
    getline(cin, name); // cin ကိုသုံးရင် su su လို့ခွဲရေးလို့မရတော့ဘူး

    cout<<"Enter email: ";
    cin>>email; // email = "susu@gmail.com"
        
    cout<<"Enter salary: ";
    cin>>salary; // salary = 500000

    cout<<"\n------User Profile------\n";

    cout<<"Employee no: "<<empNo;
    cout<<"\nName: "<<name;
    cout<<"\nEmail: "<<email;
    cout<<"\nSalary: "<<salary;

    return 0;
}