#include <iostream>
using namespace std;
#define arraySize 100


int main(){
    char s1[arraySize] = {};
    char s2[arraySize] = {};
    char *p1 = s1;
    char *p2 = s2;
    cout << "Please input two strings:" << endl;
    while (true){
        char value = cin.get();
        if (value == '\n'){
            *(p1++) = '\0';
            break;
        }
        else
            *(p1++) = value;
    }
    while (true){
        char value = cin.get();
        if (value == '\n'){
            *(p2++) = '\0';
            break;
        }
        else
            *(p2++) = value;
    }
    p1 = s1;
    p2 = s2;
    while (*p1 != '\0'){
        if (*p1 <= 'z' && *p1 >= 'a')
            *p1 += ('A' - 'a');
        p1++;
    }
    while (*p2 != '\0'){
        if (*p2 <= 'z' && *p2 >= 'a')
            *p2 += ('A' - 'a');
        p2++;
    }
    *(p1-1) = ',';
    *(p1) = ' ';
    p2 = s2;
    while (*p2 != '\0'){
        *(++p1) = *p2;
        p2++;
    }
    cout << "Output:" << endl;
    cout << s1;
}