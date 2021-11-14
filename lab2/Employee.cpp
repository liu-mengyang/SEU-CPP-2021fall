#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee( std::string first_name, std::string last_name, int monthly_salary):
    firstName( first_name ), lastName( last_name ), monthlySalary( monthly_salary ) {
        if (monthly_salary < 0)
            monthly_salary = 0;
    }

void Employee::setFirstName( std::string first_name ){
    firstName = first_name;
}
std::string Employee::getFirstName(){
    return firstName;
}
void Employee::setLastName( std::string last_name ){
    lastName = last_name;
}
std::string Employee::getLastName(){
    return lastName;
}
void Employee::setMonthlySalary( int monthly_salary ){
    if (monthly_salary >= 0)
        monthlySalary = monthly_salary;
    else
        monthlySalary = 0;
}
int Employee::getMonthlySalary(){
    return monthlySalary;
}