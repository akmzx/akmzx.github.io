#include<iostream>
using namespace std;
class Animal {
    protected :
        string name;
        int leg;
    public :
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return this->name;
        }
        void setLeg(int leg) {
            this->leg = leg;
        }
        int getLeg() {
            return this->leg;
        }
        void eat() {
            cout<<"\nI can eat!";
        }
        void sleep() {
            cout<<"\nI can sleep!";
        }
};
class Bird: public Animal {
    private : 
        int wings;
    public :
        int getWings() {
            return this->wings;
        }
        void initData(string name, int leg, int wings) {
            this->wings = wings;
            this->name = name;
            this->leg = leg;
        }
        void fly() {
            cout<<"\nI can fly!";
        }
};
class Elephant : public Animal {
    private :
        int tail;
    public :
        void setTail(int tail) {
            this->tail = tail;
        }
        void swim() {
            cout<<"\nI can swim!";
        }
        void showInfo() {
            cout<<"\n----- Elephant Info ------";
            cout<<"\nName: "<<getName();
            cout<<"\nNo. of legs: "<<Animal::getLeg();
            cout<<"\nNo. of tails: "<<this->tail;
        }
        int getLeg() {
            return 0;
        }
};
int main() {
    Bird obj1 = Bird();
    obj1.initData("Parrot", 2, 2);
    cout<<"\n----- Bird Info -----\n";
    cout<<"Name: "<<obj1.getName();
    cout<<"\nNo. of legs: "<<obj1.getLeg();
    cout<<"\nNo. of wings: "<<obj1.getWings();
    obj1.eat();
    obj1.sleep();
    obj1.fly();

    Elephant obj2 = Elephant();
    obj2.setName("Thandar");
    obj2.setLeg(4);
    obj2.setTail(1);
    obj2.showInfo();
    obj2.swim();
    obj2.eat();
    obj2.sleep();
}