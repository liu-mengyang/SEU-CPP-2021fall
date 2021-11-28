#include <iostream>
using namespace std;

int main(){
    int counter = 0;
    int number = 0;
    int largest = 0;

    cout << "Input 10 numbers from keyboard: ";

    while (counter < 10){
        cin >> number;
        if (number > largest){
            largest = number;
        }
        counter += 1;
    }
    cout << "The largest input number is " << largest << endl;
}