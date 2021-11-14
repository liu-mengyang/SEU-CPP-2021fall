#include <iostream>
#include "Employee.h"
using namespace std;

int main(){
    Employee ema("Bob", "Jones", 2875);
    Employee emb("Susan", "Baker", 3150);
    cout << "Employee 1: " << ema.getFirstName() << " " << ema.getLastName() << "; Yearly Salary: " << ema.getMonthlySalary() * 12 << endl;
    cout << "Employee 2: " << emb.getFirstName() << " " << emb.getLastName() << "; Yearly Salary: " << emb.getMonthlySalary() * 12 << endl;
    cout << "Increasing employee salaries by 10%" << endl;
    ema.setMonthlySalary(ema.getMonthlySalary() * 1.1);
    emb.setMonthlySalary(emb.getMonthlySalary() * 1.1);
    cout << "Employee 1: " << ema.getFirstName() << " " << ema.getLastName() << "; Yearly Salary: " << ema.getMonthlySalary() * 12 << endl;
    cout << "Employee 2: " << emb.getFirstName() << " " << emb.getLastName() << "; Yearly Salary: " << emb.getMonthlySalary() * 12 << endl;
    return 0;
}