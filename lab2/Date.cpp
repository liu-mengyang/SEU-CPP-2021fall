#include <iostream>
#include "Date.h"
using namespace std;

Date::Date( int m, int d, int y):
    month( m ), day( d ), year( y ) {
        if (m <= 0 || m > 12)
            m = 1;
    }

void Date::setMonth( int m ){
    if (m > 0 && m <= 12)
        month = m;
    else
        month = 1;
}
int Date::getMonth(){
    return month;
}
void Date::setDay( int d ){
    day = d;
}
int Date::getDay(){
    return day;
}
void Date::setYear( int y ){
    year = y;
}
int Date::getYear(){
    return year;
}
void Date::displayDate(){
    cout << month << "/" << day << "/" << year << endl;
}