#include<iostream>
using namespace std;
int main() {
    int s_num,e_num;
    int total = 0, count = 0;

    //input 
    cout<<"Enter start number: ";
    cin>>s_num;
    cout<<"Enter end number: ";
    cin>>e_num;

    //calculate sum
    while (s_num <= e_num) {
        total = total + s_num;
        s_num++;
        count++;
    }

    //display output
    cout<<"Total: "<<total; 
    cout<<"\nNo of numbers: "<<count;
    
    return  0;
}