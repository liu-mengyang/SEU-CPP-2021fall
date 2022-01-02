#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip(){
    return (rand()%10) * 0.1 < 0.5;
}

void coin_test(int times){
    int head_count = 0;
    int tail_count = 0;
    for (int i = 0; i< times; i++)
        if (flip()==0)
            tail_count++;
        else
            head_count++;
    cout << "The percentage of tails: " << (double)tail_count / (double)times << " in " << times << " times." << endl;
}

int main(){
    srand(time(0));
    coin_test(10);
    coin_test(100);
    coin_test(1000);
    coin_test(10000);
    coin_test(100000);
}