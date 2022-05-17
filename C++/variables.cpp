#include<iostream>
using namespace std;

int a = 10; // global var
void display() {
    int a = 20; // local var
    cout<<"\nValue of a inside function: "<<a<<"\n";
}
void displayAnother(int a) { // parameter (local scope)
    cout<<"Value of a inside fun parameter: "<<a<<"\n";
}
int main() {
    int rno;

    cout<<"\nValue of a: "<<a;
    display();
    displayAnother(100);

   {
       rno = 10;
       int mark;
   }
//    cout<<mark;
    return 0;
}