#include<iostream>
using namespace std;
int main() {
    bool result = (3 != 5) && (3 < 5); // true && true => true
    cout<<"(3 != 5) && (3 < 5): "<<result;

    result = (3 == 5) && (3 < 5); //false && => false
    cout<<"\n(3 == 5) && (3 < 5): "<<result;

    cout<<"\n(3 == 5) && (3 > 5): "<<(3 == 5) && (3 > 5);

    cout<<"\n(3 != 5) || (3 < 5): "<<(3 != 5) || (3 < 5);
    cout<<"\n(3 == 5) || (3 > 5): "<<(3 == 5) || (3 > 5);

    result = !(3 == 5);
    cout<<"\n!(3==5): "<<result;
    result = !(3 != 5) || (3 < 5); // !(true || true) => false
    cout<<"\n!(3 != 5) || (3 < 5): "<<result;
    
    return 0;
}