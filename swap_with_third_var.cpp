#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping (using third variable): a = " << a << ", b = " << b << endl;
    return 0;
}
