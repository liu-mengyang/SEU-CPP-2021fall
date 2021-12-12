#include <iostream>
using namespace std;

int main(){
    int nlines = 0;
    cout << "Enter an odd number:";
    cin >> nlines;
    if (nlines % 2 == 0){
        cout << "Please input odd number!";
        return -1;
    }
    if (nlines > 19 && nlines < 0){
        cout << "Please check the number in the range 1 to 19!";
        return -1;
    }
    nlines--;
    for (int i = 0; i <= nlines; i++){
        int half_lines = nlines / 2;
        for (int j = 0; j <= nlines; j++){
            if (i <= half_lines && ((j >= half_lines-i) && (j <= half_lines+i)))
                cout << "*";
            else if (i <= half_lines)
                cout << " ";
            else if ((j >= i-half_lines) && (j <= nlines+half_lines-i))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}