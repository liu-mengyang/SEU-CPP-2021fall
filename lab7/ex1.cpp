#include <iostream>
using namespace std;

int main(){
    cout << "Enter 20 integers between 10 and 100:" << endl;
    int a[20] = {};
    int counter = 0;
    int flag = 0;
    int in_value = 0;
    while (counter != 20){
        flag = 0;
        cin >> in_value;
        if (in_value < 10 || in_value > 100){
            cout << "Invalid number." << endl;
            continue;
        }
        for (int i = 0; i <= counter; i++){
            if (a[i] == in_value){
                cout << "Duplicate number" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            continue;
        a[counter++] = in_value;
    }
    cout << endl;
    cout << "The nonduplicate values are:" << endl;
    for (int i = 0; i <= 19; i++){
        cout << a[i] << " ";
    }
}