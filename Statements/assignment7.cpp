#include<iostream>
using namespace std;
int main() {
    int prog_mark,eng_mark,math_mark,total_mark,avg_mark;

    cout<<"Enter mark for Programming: ";
    cin>>prog_mark;
    cout<<"Enter mark for English: ";
    cin>>eng_mark;
    cout<<"Enter mark for Maths: ";
    cin>>math_mark;

    if (prog_mark != eng_mark && prog_mark != math_mark && eng_mark != math_mark) {
        if (prog_mark > eng_mark && prog_mark > math_mark) {
            cout<<"Subject that got maximum mark is Programming\n";
        }
        else if (eng_mark > prog_mark && eng_mark > math_mark) {
            cout<<"Subject that got maximum mark is English\n";
        }  
        else {
            cout<<"Subject that got maximum mark is Maths\n";
        }

        if (prog_mark < eng_mark && prog_mark < math_mark) {
            cout<<"Subject that got minimum mark is Programming\n";
        }
        else if (eng_mark < prog_mark && eng_mark < math_mark) {
            cout<<"Subject that got minimum mark is English\n";
        }
        else {
            cout<<"Subject that got minimum mark is Maths\n";
        }
    }
    else if (prog_mark == eng_mark && prog_mark == math_mark) {
        cout<<"All subjects got the same mark\n";
    }
    else {
        if (prog_mark == eng_mark && prog_mark < math_mark) {
            cout<<"Subject that got the maximum mark is Maths\n";
            cout<<"Subjects that got the minimum mark are Programming and English\n";
        }
        else if (prog_mark == eng_mark && prog_mark > math_mark) {
            cout<<"Subjects that got the maximum mark are Programming and English\n";
            cout<<"Subject that got the minimum mark is Maths\n";
        }
        else if (prog_mark == math_mark && prog_mark < eng_mark) {
            cout<<"Subject that got the maximum mark is English\n";
            cout<<"Subjects that got the minimum mark are Programming and Maths\n";
        }
        else if (prog_mark == math_mark && prog_mark > eng_mark) {
            cout<<"Subjects that got the maximum mark are Programming and Maths\n";
            cout<<"Subject that got the minimum mark is English\n";
        }
        else if (eng_mark == math_mark && eng_mark < prog_mark) {
            cout<<"Subject that got the maximum mark is Programming\n";
            cout<<"Subjects that got the minimum mark are English and Maths\n";
        }
        else {
            cout<<"Subjects that got the maximum mark are English and Maths\n";
            cout<<"Subject that got the minimum mark is Programming\n";
        }
    }

    total_mark = prog_mark + eng_mark + math_mark;
    cout<<"Total mark: "<<total_mark<<"\n";

    avg_mark = total_mark/3;
    cout<<"Average mark: "<<avg_mark<<"\n";

    cout<<"Distinction subjects -\n";

    if (prog_mark >= 80){
        cout<<"Programming\n";
    }
    if (eng_mark >= 80) {
        cout<<"English\n";
    }
    if (math_mark >= 80) {
        cout<<"Maths\n";
    }
    return 0;
}