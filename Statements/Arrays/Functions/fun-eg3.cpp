#include<iostream>
using namespace std;
int salaries[5] = {
    500000, 900000, 350000, 1000000, 1500000
};
// max salary
int findMaxSalary() {
    int max_sal = salaries[0];
    for (int i = 0; i < 5; i++) {
        if (max_sal < salaries[i]) {
            max_sal = salaries[i];
        }
    }
    return max_sal;
}
// total salary
int getTotalSalary() {
    int total = 0;
    for (int i = 0; i < 5; i++) 
        total = total + salaries[i];
    
    return total;
}
void display() {
    cout<<"This is a method";
}
int main() {
    cout<<"\nMax salary is "<<findMaxSalary();
    cout<<"\nTotal salary is "<<getTotalSalary();
    return 0;
}