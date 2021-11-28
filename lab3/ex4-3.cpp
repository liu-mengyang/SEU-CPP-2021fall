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
    float x = 0;
    float result = 1.0;
    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input the number of terms in the summation: ";
    cin >> n;
    while (n != 0){
        int temp_n = n;
        float molecule = 1;
        while (temp_n != 0){
            molecule *= x;
            temp_n -= 1;
        }
        float temp = molecule/float(fac(n));
        result += temp;
        n -= 1;
    }
    cout << "The approximate value of e^" << x << " is: " << result << endl;
}