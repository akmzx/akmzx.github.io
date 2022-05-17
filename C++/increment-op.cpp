#include<iostream>
using namespace std;

int main() {
    int var1 = 5;
    int var2 = 5;

    cout<<"var1 = "<<var1;
    cout<<"\nvar2 = "<<var2;

    //var1++; // var1 = var1 + 1
    //++var1;
    int result = var1++ - 2; // 5 - 2 = 3 (var1 = 6)
    cout<<"\nAfter increment, var1 = "<<var1;
    cout<<"\nResult: "<<result;
    return 0;
}