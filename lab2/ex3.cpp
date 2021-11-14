#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    Date d1(9, 25, 2021);
    cout << "Today's date is: ";
    d1.displayDate();
    cout << "Date back to 1900: ";
    d1.setYear(1900);
    d1.displayDate();
    return 0;
}