#include <iostream>
using namespace std;

int power(int base, int exponent){
    if (exponent == 1)
        return base;
    else if (exponent > 1)
        return base * power(base, exponent-1);
    else
        return -1;
}

int main(){
    int base = 0;
    int exponent = 0;
    cout << "Enter a base and an exponent: ";
    cin >> base >> exponent;
    int result = power(base, exponent);
    if (result == -1)
        cout << "Exponent must greater than or equal to 1.";
    cout << base << " raised to the " << exponent << " is " << result << endl;
}
