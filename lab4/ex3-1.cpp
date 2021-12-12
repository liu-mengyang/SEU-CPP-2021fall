#include <iostream>
using namespace std;

int main(){
    int nlines = 8;
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
}