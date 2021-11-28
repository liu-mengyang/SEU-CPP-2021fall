#include <iostream>
using namespace std;

int fac(int n){
    int result = 1;
    if (n == 0 || n == 1)
        result = 1;
    else{
        while(n != 1){
            result *= n;
            n -= 1;
        }
    }
    return result;
}

int main(){
    int n = 0;
    float result = 1.0;
    cout << "Input the number of terms in the summation: ";
    cin >> n;
    while (n != 0){
        float temp = 1.0/float(fac(n));
        result += temp;
        n -= 1;
    }
    cout << "The approximate value of the mathematical constant e is: " << result << endl;
}