#include <iostream>
using namespace std;

unsigned long fibonacci( unsigned long number ){
    unsigned long result = 1;
    if ( ( 0 == number ) || ( 1 == number ))
        return number;
    else{
        int pre_number = 1;
        int pre_prenumber = 0;
        int cur_number = 0;
        for ( unsigned long i = 2; i <= number; ++i ){
            cur_number = pre_number + pre_prenumber;
            pre_prenumber = pre_number;
            pre_number = cur_number;
        }
        return cur_number;
    }

    return result;
}

int main(){
    for ( unsigned int counter = 0; counter <= 10; ++counter)
        cout << "fibonacci( " << counter << " ) = " << fibonacci( counter ) << endl;

    cout << "\nfibonacci( 20 ) = " << fibonacci( 20 ) << endl;
    cout << "fibonacci( 30 ) = " << fibonacci( 30 ) << endl;
    cout << "fibonacci( 35 ) = " << fibonacci( 35 ) << endl;
}