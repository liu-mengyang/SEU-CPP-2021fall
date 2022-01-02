#include <iostream>
#include <array>
using namespace std;

int main(){
    const int arraySize = 1000;
    array<int, arraySize> a = {};
    a.fill(1);
    
    for (int i = 2; i < 1000; i++){
        if (a[i] == 0)
            continue;
        for (int j = i + 1; j < 1000; j++){
            if (a[j] == 0)
                continue;
            if (j % i == 0)
                a[j] = 0;
        }
    }
    int counter = 0;
    for (int i = 2; i < 1000; i++){
        if (a[i] == 0)
            continue;
        counter++;
        cout << "\t" << i;
        if (counter % 8 == 0)
            cout << endl;
    }
}