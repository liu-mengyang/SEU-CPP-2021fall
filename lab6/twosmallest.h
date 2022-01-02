#include <iostream>
using namespace std;

template < typename T >
int TwoSmallest(T a, T b, T c, T &s1, T &s2){
    s1 = a;
    s2 = b;
    if ( b < a ){
        s1 = b;
        s2 = a;
    }
    else if ( b == a){
        if (c < b)
            s1 = c;
    }
    else{
        if ( c < s2){
            if ( c < s1){
                s1 = c;
                s2 = a;
            }
            else
                s2 = c;
        }
    }
    if (s1 == s2)
        return 1;
    else
        return 2;
}

template < typename T >
void ShowTwoSmallest(int smallnum, T s1, T s2){
    cout << "The smallest number : " << s1 << endl;
    if (smallnum > 1)
        cout << "The second smallest number : " << s2 << endl;
}
