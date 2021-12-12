#include <iostream>
using namespace std;

int main(){
    cout << "Enter integers (first integer should be the number of subsequent integers):";
    int total = 0;
    int n = 0;
    int count = 0;
    double avg = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int value = 0;
        cin >> value;
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