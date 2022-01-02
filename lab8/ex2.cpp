#include <iostream>
using namespace std;

int main(){
    int a[3][5] = {1,1,1,1,1,
                   0,0,0,1,1,
                   0,0,0,0,1};
    
    int *p = &a[0][0];
    // show
    cout << "Original matrix:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cout << *(p+5*i+j) << " ";
        }
        cout << endl;
    }
    // transpose
    int b[5][3] = {};
    int *pt = &b[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            *(pt+3*j+i) = *(p+5*i+j);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            *(p+5*i+j) = *(pt+5*i+j);
        }
    }
    // show
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            cout << *(p+3*i+j) << " ";
        }
        cout << endl;
    }
}