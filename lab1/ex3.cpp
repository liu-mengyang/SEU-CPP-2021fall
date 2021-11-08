//  EX3

//  Write a program that reads in two integers and determines
//  and prints whether the first is a multiple of the second.

#include <iostream>

int main(){
    int a, b = 0;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int r = 0;

    r = a % b;
    if (r == 0){
        std::cout << a << " is a multiple of " << b << std::endl;
    } else {
        std::cout << a << " is not a multiple of " << b << std::endl;
    }

}