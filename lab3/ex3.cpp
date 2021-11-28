#include <iostream>
using namespace std;

int main(){
    int biInt = 0;
    int decInt = 0;
    int biTemp = 0;
    int count = 0;

    cout << "Input a binary integer: ";
    cin >> biInt;
    biTemp = biInt;
    while (biInt != 0){
        int pow = 1;
        int count_temp = count;
        while (count_temp != 0){
            pow *= 2;
            count_temp -= 1;
        }
        decInt = decInt + pow * (biInt % 10);
        biInt /= 10;
        count += 1;
    }
    cout << "The decimal equivalent of binary " << biTemp << " is " << decInt << endl;
}