#include <iostream>
using namespace std;

int gcd(int x, int y){
    if (x <= y)
        return -1;
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main(){
    int x=0, y= 0;
    cout << "Enter two integers: ";
    cin >> x >> y;
    int result = gcd(x, y);
    if (result == -1)
        cout << "x must be larger than y.";
    cout << "Greatest common divisor of " << x << " and " << y << " is " << result << endl;
}