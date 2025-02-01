// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n = 5.5;            // casting from complex type to simpler type is dangerous,
    cout << n << "\n";      // 5.5 is reduced to 5, not recoverable   

    bool b = 200;           // casting from complex type to simpler type is dangerous,
    cout << b << "\n";      // the specific value 200 is reduced to true, not recoverable

    cout << endl;
    return 0;
}