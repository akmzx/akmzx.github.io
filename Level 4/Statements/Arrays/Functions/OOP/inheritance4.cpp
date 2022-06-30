#include<iostream>
using namespace std;
class Person {
    private: 
        string name;
        public:
            void getData() {
                cout<<"\nName: ";
                getline(cin, name);
            }
            void display() {
                cout<<"\nName: "<<name;
            }
};
class Employee : public Person {
    private: 
        string company;
        int salary;
    public:
        void getData() {
            Person::getData();
            cout<<"Company name: ";
            cin>>company;
            cout<<"Salary: ";
            cin>>salary;
            cin.ignore();
        }
        void display() {
            Person::display();
            cout<<"\nCompany name: "<<company;
            cout<<"\nSalary: "<<salary;
        }
};      
class Programmer : public Employee {
    private: 
        string skillset;
    public:
        void getData() { //override
            Employee::getData();
            cout<<"Enter skill set: ";
            getline(cin, skillset);
        }
        void display() { // override
            Employee::display();
            cout<<"\nSkillset: "<<skillset;
        }
};
int main() {
    Programmer obj = Programmer();
    cout<<"fill your information\n";
    obj.getData();
    cout<<"\n----- Profile -----\n";
    obj.display();
    return 0;
}