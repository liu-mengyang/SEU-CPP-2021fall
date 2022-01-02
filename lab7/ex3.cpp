#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main(){
    const int arraySize = 10;
    array<int, arraySize> a = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int hold;
    cout << "Data items in original order\n";
    for (int i = 0; i < arraySize; i++)
        cout << setw(4) << a[i];
    for (int i = 0; i < arraySize-1; i++){
        for (int j = 0; j < arraySize; j++){
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout << "\nData items in ascending order\n";
    for (int k = 0; k < arraySize; k++)
        cout << setw(4) << a[k];
    cout << endl;
    return 0;
}