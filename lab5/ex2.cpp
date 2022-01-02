#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> get_factors(int value){
    vector<int> factors;
    for (int i = 1; i < value; i++){
        if (value % i == 0)
            factors.push_back(i);
    }
    return factors;
}

bool perfect(int value){
    vector<int> factors = get_factors(value);
    int sum = 0;
    for (int i = 0; i < factors.size(); i++){
        sum += factors[i];
    }
    if (sum == value)
        return true;
    else
        return false;

}

void show_results(int value){
    vector<int> factors = get_factors(value);
    cout << value << " = ";
    for (auto iter=factors.begin(); iter != factors.end(); iter++){
        if (iter != factors.end()-1)
            cout << *iter << " + ";
        else
            cout << *iter << endl;
    }
}

int main(){
    // vector<int> vec = get_factors(90);
    // for (auto iter=vec.begin(); iter != vec.end(); iter++)
        // cout << *iter << endl;
    for (int i = 1; i <= 1000; i++){
        if (perfect(i)){
            show_results(i);
        }
    }
}