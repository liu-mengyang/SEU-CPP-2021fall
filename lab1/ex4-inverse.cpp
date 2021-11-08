//  EX4-inverse

//  Write the inverse program, a program which asks the user
//  for three one-digit numbers and combines them into a single three-digit number.

#include <iostream>

int main(){
    int fd = 0;
    int a, b, c, d, e = 0;
    int r = 0;

    std::cout << "Enter five digit integer: ";
    std::cin >> a >> b >> c >> d >> e;
    
    fd += e;
    fd += 10 * d;
    fd += 100 * c;
    fd += 1000 * b;
    fd += 10000 * a;

    std::cout << fd << std::endl;

}