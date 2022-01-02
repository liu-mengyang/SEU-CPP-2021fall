#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int value){
    int k = 0;
    k = (int)sqrt((double)value);
    for (int i = 2; i <=k; i++)
        if (value%i==0){
            return false;
        }
    return true;
}

int main(){
    int count = 0;
    cout << "The prime numbers from 1 to 10000 are:" << endl;
    for (int i = 2; i <= 10000; i++){
        if (is_prime(i)){
            cout << '\t' << i;
            if (count % 10 == 0)
                cout << endl;
            count += 1;
        }
    }
    cout << endl;
    cout << "Total of " << count << " prime numbers between 1 and 10000." << endl;
}