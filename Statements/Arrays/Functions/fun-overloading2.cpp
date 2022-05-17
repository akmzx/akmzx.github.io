#include<iostream>
using namespace std;
int max(int n1, int n2) {
    return (n1 < n2) ? n2 : n1;
}
int max(int n1, int n2, int n3) {
    int max_val = n1;

    if (max_val < n2)
        max_val = n2;
    if (max_val < n3)
        max_val = n3;
    
    return max_val;
}

int main() {
    cout<<"Max value is "<<max(34, 55);
    cout<<"\nMax value is "<<max(100, 99, 300);
    return 0;
}