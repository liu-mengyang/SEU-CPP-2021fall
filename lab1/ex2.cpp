//  EX2:n numbercompare.cpp

//  Write a program that inputs three integers from the keyboard,
//  and prints the sum, average, product, smallest and largest of these numbers.

#include <iostream>

int main(){
    int a, b, c = 0;
    int sum, avg, pro, small, large = 0;

    std::cout << "Input three different integers: ";
    // single cin
    std::cin >> a >> b >> c;
    // triple cin
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    sum = a + b + c;
    avg = sum / 3;
    pro = a * b * c;
    
    if (a > b){
        if (a > c){
            large = a;
        } else {
            large = c;
        }
    } else {
        if (b > c){
            large = b;
        } else {
            large = c;
        }
    }

    if (a < b){
        if (a < c){
            small = a;
        } else {
            small = c;
        }
    } else {
        if (b < c){
            small = b;
        } else {
            small = c;
        }
    }

    std::cout << "Sum is " << sum << std::endl;
    std::cout << "Average is " << avg << std::endl;
    std::cout << "Product is " << pro << std::endl;
    std::cout << "Smallest is " << small << std::endl;
    std::cout << "Largest is " << large << std::endl;
}