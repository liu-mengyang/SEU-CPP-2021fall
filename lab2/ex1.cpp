#include <iostream>
#include "GradeBook.h"
using namespace std;

int main(){
    GradeBook gradeBook("CS101 Introduction to C++ Programming!", "Sam Smith");
    gradeBook.displayMessage();
    string new_instructor_name = "Judy Jones";
    cout << "Changing instructor name to " << new_instructor_name << endl;
    gradeBook.setInstructorName(new_instructor_name);
    gradeBook.displayMessage();
    return 0;
}