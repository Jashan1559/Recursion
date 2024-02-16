//Power of a number 


#include <iostream>
using namespace std;


int power(int base, int pow) {
    if (pow == 0) {
        return 1;
    }
    else {
        return base * power(base, pow - 1);
    }
}

int main() {
    int base;
    int pow;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> pow;

    int result = power(base, pow);
    cout << base << " raised to the power of " << pow << " is: " << result << endl;

    return 0;
}
