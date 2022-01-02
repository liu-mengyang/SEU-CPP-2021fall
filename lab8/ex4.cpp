#include <iostream>
using namespace std;
#define arraySize 100

bool paren_check(char* expr){
    int left_count = 0;
    int right_count = 0;
    while(*expr != '\0'){
        if (*expr == '(')
            left_count++;
        else if (*expr == ')')
            right_count++;
        expr++;
    }
    if (left_count == right_count)
        return 1;
    else
        return 0;
}

int main(){
    char a[arraySize] = "((a+1)*b/(c+d))";
    char b[arraySize] = "((a+1)*b/)c+d))";

    cout << a;
    if (!paren_check(a))
        cout << " is error!" << endl;
    else
        cout << " is correct." << endl;
    cout << b;
    if (!paren_check(b))
        cout << " is error!" << endl;
    else
        cout << " is correct." << endl;
    
}