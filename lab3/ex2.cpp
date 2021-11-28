#include <iostream>
using namespace std;

int main(){
    int number;
    int new_number;
    int number_temp;

    cout << "Input a five-digit integer: ";
    cin >> number;
    number_temp = number;

    while (number != 0){
        new_number = new_number * 10 + number % 10;
        number = number / 10;
        if (number == 0)
            if (new_number == number_temp)
                cout << "The five-digit integers is a palindrome!" << endl;
            else
                cout << "It is not a palindrome!" << endl;
    }
}