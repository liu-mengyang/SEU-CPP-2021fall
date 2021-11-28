#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int result = 1;

    cout << "Input a nonnegative integer: ";
    cin >> n;

    if (n == 0 || n == 1)
        result = 1;
    else{
        while(n != 1){
            result *= n;
            n -= 1;
        }
    }
    cout << "The factorial of this integer is: " << result << endl;
}