#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2 && n1 >= n3)
        cout << "Largest is " << n1 << endl;
    else if (n2 >= n1 && n2 >= n3)
        cout << "Largest is " << n2 << endl;
    else
        cout << "Largest is " << n3 << endl;
    return 0;
}
