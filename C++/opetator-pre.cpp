#include<iostream>
using namespace std;

int main() {
    int a = 20, b = 10, c = 5, d = 30;
    int result;

    result = (a + b) * c / d; // 30 * 5 / 30 = 150 / 30
    cout<<"(a + b) * c / d = "<<result;

    result = ((a + b) * c) / d; // (30 * 5) / 30 = 150 / 30 = 5
    cout<<"\n((a + b) * c) / d = "<<result;

    result = (a + b) * (c / d); // 30 * 0 = 0
    cout<<"\n(a + b) * (c / d) = "<<result;

    result = a + (b * c) / d; // 20 + 50 / 30 = 20 + 1 = 21
    cout<<"\na + (b * c) / d = "<<result;

    result = a + (b * c / d); // 20 + (10 * 5 / 30) => 20 + 1 = 21
    cout<<"\na + (b * c / d) = "<<result;

    return 0;
}
