// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    float f1 = 1.5353;    
    float f2 = 1.0000;
    cout << f1 << "\n";         // f1 prints as floating point value
    cout << f2 << "\n\n";       // f2 does not

    cout.setf(ios::fixed);      // force floating point output all subsequent couts (for floating point variables only)
    cout << f2 << "\n\n";       

    cout.precision(2);          // specify the number of decimal places
    cout << f1 << "\n";         // number is rounded
    cout << f2 << "\n\n";

    cout.precision(3);          // precision can be modified at any point in the program
    cout << f1 << "\n";         
    cout << f2 << "\n";   

    int i = 10;
    cout << i << "\n";          // non floating-point values print normally

    cout << endl;
    return 0;
}