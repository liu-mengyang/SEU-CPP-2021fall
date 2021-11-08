//  EX4

//  Write a program that inputs a five-digit number,
//  separates the number into its individual digits
//  and prints the digits separated from one another by three spaces each.

#include <iostream>

int main(){
    int fd = 0;
    int a, b, c, d, e = 0;
    int r = 0;

    std::cout << "Enter a five-digit integer: ";
    std::cin >> fd;
    
    a = fd / 10000;
    r = fd % 10000;
    b = r / 1000;
    r = r % 1000;
    c = r / 100;
    r = r % 100;
    d = r / 10;
    e = r % 10;

    std::cout << a << "   " << b << "   " << c << "   " << d << "   " << e << std::endl;

}