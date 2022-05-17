#include<iostream>
using namespace std;
class Person {
    protected:
        string name;
        string ncrno;
    public: 
        void initData(string name, string ncrno) {
            this->name =name;
            this->ncrno = ncrno;
        }
        void showData() {
            cout<<"\nName - "<<name;
            cout<<"\nNcrno - "<<ncrno;
        }
};
class Student : public Person {
    private: 
        int rno;
    public:
        Student (int rno, string name, string ncrno) {
            this->rno = rno;
            initData(name, ncrno);
        }
        void showData() { // method overriding 
            Person::showData();
            cout<<"\nRno - "<<rno;
        }
        void attend() {
            cout<<"\nHello, I am attending 5th year";
        }
};
class Programmer : public Person {
    private: 
        string skillset;
    public: 
        void setSkillset(string skills) {
            this->skillset = skills;
        }
        void viewSkillSet() {
            cout<<"Hello, I am a programmer.I am skillful in these languages: ";
            cout<<skillset;
        }
};
int main() {
    Student obj1 = Student(1, "Aung Aung", "6/mamana(n)234173");
    cout<<"\n----- Student Info -----\n";
    obj1.attend();
    obj1.showData();

    cout<<"\n----- Programmer Info -----\n";
    Programmer obj2 = Programmer();
    obj2.initData("Cherry", "5mayana(n)315145");
    obj2.setSkillset("Js, Python, C++");
    obj2.viewSkillSet();
    obj2.showData();
    return 0;
}