#include <iostream>
#include <ctime>
using namespace std;

float expected[11] = {1./36, 2./36, 3./36, 4./36, 5./36, 6./36,
                      5./36, 4./36, 3./36, 2./36, 1./36};

void show(int a[], int times){
    cout << "\tSum" << "\tTotal" << "\tExpected" << "\tActual" << endl;
    for (int i = 0; i < 11; i++){
        cout << "\t" << i+2 << "\t" << a[i] << "\t" << expected[i]*100 << "%\t" << float(a[i])/times*100 << "%" << endl;
    }
}

int roll(){
    return 0 + rand() % (6 + 1);
}

void test(int times){
    int a[11] = {};
    for (int i = 0; i < times; i++){
        int dice1 = roll();
        int dice2 = roll();
        int sum = dice1 + dice2;
        a[sum-2]++;
    }
    show(a, times);
}


int main(){
    srand(time(0));

    test(3600);

    test(36000);

    test(360000);
    
    test(36000000);
}