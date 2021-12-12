#include <iostream>
using namespace std;

int main(){
    int count = 0;
    long int hypotenuseSquared;
    long int sidesSquared;
    long loopCounter = 0;
    
    cout << "Side 1\tSide 2\tSide3" << endl;

    for (int side1 = 1; side1 <= 500; side1++){
        if (side1 == 8)
            continue;
        for (int side2 = side1; side2 <= 500; side2++){
            for (int hypotenuse = side2; hypotenuse <= 500; hypotenuse++){
                loopCounter ++;
                hypotenuseSquared = hypotenuse * hypotenuse;
                sidesSquared = side1 * side1 + side2 * side2;
                if (hypotenuseSquared == sidesSquared){
                    cout << side1 << '\t' << side2 << '\t' << hypotenuse << endl;
                    count ++;
                }
            }
        }
    }

    cout << "A total of " << count <<" triples were found." << endl;
    cout << "LoopCounter is " << loopCounter << "." << endl;
    return 0;
}