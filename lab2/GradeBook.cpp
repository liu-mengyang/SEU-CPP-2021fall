#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook( string cname, string iname): courseName( cname ), instructorName( iname ) {}

void GradeBook::setCourseName( string name ){
    courseName = name;
}

string GradeBook::getCourseName() const{
    return courseName;
}

void GradeBook::setInstructorName( string name ){
    instructorName = name;
}

string GradeBook::getInstructorName() const{
    return instructorName;
}

void GradeBook::set( string cname, string iname) {
    courseName = cname;
    instructorName = iname;
}

Names GradeBook::get() const{
    struct Names names;
    names.courseName = getCourseName();
    names.instructorName = getInstructorName();
    return names;
}

void GradeBook::displayMessage() const{
    string courseName = "";
    string instructorName = "";

    struct Names names = get();
    courseName = names.courseName;
    instructorName = names.instructorName;

    cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
    cout << "This course is presented by: " << instructorName << endl;
}