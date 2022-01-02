#include <iostream>
#include <string>
#include "twosmallest.h"
using namespace std;

int main(){
    while (true){
        cout << "***************" << endl;
        cout << "  1.  int" << endl;
        cout << "  2.  double" << endl;
        cout << "  3.  char" << endl;
        cout << "  4.  string" << endl;
        cout << "  0.  exit" << endl;
        cout << "***************" << endl;
        cout << "Inout choice: ";
        int choice = 0;
        cin >> choice;
        switch (choice){
            case 0:
                return 1;
            case 1:{
                int a=0, b=0, c=0;
                cout << "Int1:";
                cin >> a;
                cout << "Int2:";
                cin >> b;
                cout << "Int3:";
                cin >> c;
                int res1=0, res2=0;
                int smallnum = TwoSmallest(a, b, c, res1, res2);
                ShowTwoSmallest(smallnum, res1, res2);
                break;
            }
            case 2:{
                double a=0, b=0, c=0;
                cout << "Double1:";
                cin >> a;
                cout << "Double2:";
                cin >> b;
                cout << "Double3:";
                cin >> c;
                double res1=0, res2=0;
                int smallnum = TwoSmallest(a, b, c, res1, res2);
                ShowTwoSmallest(smallnum, res1, res2);
                break;
            }
            case 3:{
                char a=0, b=0, c=0;
                cout << "Char1:";
                cin >> a;
                cout << "Char2:";
                cin >> b;
                cout << "Char3:";
                cin >> c;
                char res1=0, res2=0;
                int smallnum = TwoSmallest(a, b, c, res1, res2);
                ShowTwoSmallest(smallnum, res1, res2);
                break;
            }
            case 4:{
                string a="", b="", c="";
                cout << "String1:";
                cin >> a;
                cout << "String2:";
                cin >> b;
                cout << "String3:";
                cin >> c;
                string res1="", res2="";
                int smallnum = TwoSmallest(a, b, c, res1, res2);
                ShowTwoSmallest(smallnum, res1, res2);
                break;
            }
        }
    }
}
