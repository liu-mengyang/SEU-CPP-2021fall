#include <iostream>
using namespace std;

int main(){
    cout << "Enter integers (9999 to end):";
    int total = 0;
    int value = 0;
    int count = 0;
    double avg = 0;
    cin >> value;
    for (; value != 9999; cin >> value){
        total += value;
        count += 1;
    }
    avg = double(total) / double(count);
    if (count != 0)
        cout << "\nThe average is: " << avg << endl;
    else
        cout << "\nNo values were entered." << endl;

    return 0;
}