#include <iostream>
using namespace std;

void print_solid_square(int side, char fillCharacter){
    for (int i = 0; i < side; i++){
        for (int j = 0; j < side; j++)
            cout << fillCharacter;
        cout << endl;
    }
}

int main(){
    print_solid_square(5, '*');
}